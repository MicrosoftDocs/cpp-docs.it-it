---
title: Enumerazione ATL_URL_SCHEME
ms.date: 11/04/2016
helpviewer_keywords:
- ATLUTIL/ATL::ATL_URL_SCHEME
ms.assetid: f4131046-8ba0-4ec1-8209-84203f05d20e
ms.openlocfilehash: bcc503082aa3acfaeb627467903e20775c7554d7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50435152"
---
# <a name="atlurlscheme"></a>ATL_URL_SCHEME

I membri di questa enumerazione forniscono costanti per gli schemi comprensibile [CUrl](curl-class.md).

## <a name="syntax"></a>Sintassi

```
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

## <a name="see-also"></a>Vedere anche

[Concetti](../active-template-library-atl-concepts.md)<br/>
[CUrl::SetScheme](curl-class.md#setscheme)<br/>
[CUrl::GetScheme](curl-class.md#getscheme)
