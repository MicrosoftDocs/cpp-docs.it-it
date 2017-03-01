---
title: Classe CDefaultCharTraits | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDefaultCharTraits
- ATL::CDefaultCharTraits<T>
- ATL.CDefaultCharTraits
- ATL.CDefaultCharTraits<T>
- ATL::CDefaultCharTraits
dev_langs:
- C++
helpviewer_keywords:
- CDefaultCharTraits class
ms.assetid: f94a3934-597f-401d-8513-ed6924ae069a
caps.latest.revision: 19
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 12991cfcf1ac96808a0315899d01ce3012324dc6
ms.lasthandoff: 02/24/2017

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
  
##  <a name="a-namechartolowera--cdefaultchartraitschartolower"></a><a name="chartolower"></a>CDefaultCharTraits::CharToLower  
 Chiamare questa funzione per convertire un carattere in minuscolo.  
  
```
static wchar_t CharToLower(wchar_t x);  
static char CharToLower(char x);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Carattere da convertire in minuscolo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#132;](../../atl/codesnippet/cpp/cdefaultchartraits-class_1.cpp)]  
  
##  <a name="a-namechartouppera--cdefaultchartraitschartoupper"></a><a name="chartoupper"></a>CDefaultCharTraits::CharToUpper  
 Chiamare questa funzione per convertire un carattere in maiuscolo.  
  
```
static wchar_t CharToUpper(wchar_t x);  
static char CharToUpper(char x);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Carattere da convertire in maiuscolo.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

