#ifndef FOTAWEB_H_
#define FOTAWEB_H_

#include "httpd.h"


void fotaweb_upgrade_firmware(struct httprequest *req, char *body, 
        uint32_t body_length, uint32_t more);


#endif
