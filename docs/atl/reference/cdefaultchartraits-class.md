---
title: Classe CDefaultCharTraits | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CDefaultCharTraits
- ATLCOLL/ATL::CDefaultCharTraits
- ATLCOLL/ATL::CDefaultCharTraits::CharToLower
- ATLCOLL/ATL::CDefaultCharTraits::CharToUpper
dev_langs:
- C++
helpviewer_keywords:
- CDefaultCharTraits class
ms.assetid: f94a3934-597f-401d-8513-ed6924ae069a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 24aa01ec29f063c1fa65ebe24c707deb1ea58556
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="cdefaultchartraits-class"></a>Classe CDefaultCharTraits
Questa classe fornisce due funzioni statiche per la conversione dei caratteri tra lettere maiuscole e minuscole.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <typename T>  
class CDefaultCharTraits
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di dati da archiviare nella raccolta.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDefaultCharTraits::CharToLower](#chartolower)|(Statico) Chiamare questa funzione per convertire un carattere in maiuscolo.|  
|[CDefaultCharTraits::CharToUpper](#chartoupper)|(Statico) Chiamare questa funzione per convertire un carattere in minuscolo.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce funzioni che vengono utilizzate dalla classe [CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="chartolower"></a>  CDefaultCharTraits::CharToLower  
 Chiamare questa funzione per convertire un carattere in minuscolo.  
  
```
static wchar_t CharToLower(wchar_t x);  
static char CharToLower(char x);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Carattere da convertire in caratteri minuscoli.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#132](../../atl/codesnippet/cpp/cdefaultchartraits-class_1.cpp)]  
  
##  <a name="chartoupper"></a>  CDefaultCharTraits::CharToUpper  
 Chiamare questa funzione per convertire un carattere in maiuscolo.  
  
```
static wchar_t CharToUpper(wchar_t x);  
static char CharToUpper(char x);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Carattere da convertire in caratteri maiuscoli.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
