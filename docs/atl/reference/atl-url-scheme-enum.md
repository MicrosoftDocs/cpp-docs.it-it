---
description: 'Altre informazioni su: ATL_URL_SCHEME'
title: Enumerazione ATL_URL_SCHEME
ms.date: 11/04/2016
helpviewer_keywords:
- ATLUTIL/ATL::ATL_URL_SCHEME
ms.assetid: f4131046-8ba0-4ec1-8209-84203f05d20e
ms.openlocfilehash: 72c149345a0e1edd41bfc9b32d1e94ab6477d488
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97165134"
---
# <a name="atl_url_scheme"></a>ATL_URL_SCHEME

I membri di questa enumerazione forniscono costanti per gli schemi riconosciuti da [curl](curl-class.md).

## <a name="syntax"></a>Sintassi

```cpp
enum ATL_URL_SCHEME{
   ATL_URL_SCHEME_UNKNOWN = -1,
   ATL_URL_SCHEME_FTP     = 0,
   ATL_URL_SCHEME_GOPHER  = 1,
   ATL_URL_SCHEME_HTTP    = 2,
   ATL_URL_SCHEME_HTTPS   = 3,
   ATL_URL_SCHEME_FILE    = 4,
   ATL_URL_SCHEME_NEWS    = 5,
   ATL_URL_SCHEME_MAILTO  = 6,
   ATL_URL_SCHEME_SOCKS   = 7
};
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil. h

## <a name="see-also"></a>Vedi anche

[Concetti](../active-template-library-atl-concepts.md)<br/>
[CUrl:: sescheme](curl-class.md#setscheme)<br/>
[CUrl:: getScheme](curl-class.md#getscheme)
