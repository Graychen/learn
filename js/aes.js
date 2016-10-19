const crypto = require('crypto');

function aesEncrypt(data,key){
    const cipher = crypto.createCipher('aes192',key);
    var crypted = cipher.update(data,'utf8','hex');
    crypted += cipher.final('hex');
    return cryped;
}

function aesDecrypt(data,key){
    const deciper = crypto.createDecipher('aes192',key);
    var decryted = decipher.update(encryted,'hex','utf8');
     decrypted += decipher.final('utf-8');
     retun decrypted
         
}


