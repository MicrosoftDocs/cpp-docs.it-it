---
title: Classe writeonly_texture_view | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- writeonly_texture_view
- AMP_GRAPHICS/writeonly_texture_view
- AMP_GRAPHICS/Concurrency::graphics::writeonly_texture_view
- AMP_GRAPHICS/Concurrency::graphics::writeonly_texture_view::set
- AMP_GRAPHICS/Concurrency::graphics::rank Constant
dev_langs:
- C++
ms.assetid: 8d117ad3-0a1c-41ae-b29c-7c95fdd4d04d
caps.latest.revision: 9
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
ms.sourcegitcommit: 5faef5bd1be6cc02d6614a6f6193c74167a8ff23
ms.openlocfilehash: 5a051b8db98e36ced89783bfa1de2ab5f514c6bc
ms.lasthandoff: 03/17/2017

---
# <a name="writeonlytextureview-class"></a>Classe writeonly_texture_view
Fornisce l'accesso writeonly su una trama.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <
    typename value_type,  
    int _Rank  
>  
class writeonly_texture_view;  
 
template <
    typename value_type,  
    int _Rank  
>  
class writeonly_texture_view<value_type, _Rank> : public details::_Texture_base<value_type, _Rank>;  
```  
  
#### <a name="parameters"></a>Parametri  
 `value_type`  
 Tipo degli elementi di trama.  
  
 `_Rank`  
 Il numero di dimensioni della trama.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`scalar_type`||  
|`value_type`|Tipo degli elementi di trama.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore writeonly_texture_view](#ctor)|Inizializza una nuova istanza della classe `writeonly_texture_view`.|  
|[~ writeonly_texture_view distruttore](#ctor)|Elimina il `writeonly_texture_view` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[set](#set)|Imposta il valore dell'elemento in corrispondenza dell'indice specificato.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operator=](#operator_eq)|Copia l'oggetto specificato `writeonly_texture_view` a questo oggetto.|  
  
### <a name="public-constants"></a>Costanti pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Rank (costante)](#rank)|Ottiene il rango di `writeonly_texture_view` oggetto.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `_Texture_base`  
  
 `writeonly_texture_view`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp_graphics.h  
  
 **Namespace:** Concurrency:: Graphics  
  
##  <a name="dtor"></a>~ writeonly_texture_view 

 Elimina il `writeonly_texture_view` oggetto.  
  
```  
~writeonly_texture_view() restrict(amp,cpu);
```  
  
##  <a name="operator_eq"></a>operatore = 

 Copia l'oggetto specificato `writeonly_texture_view` a questo oggetto.  
  
```  
writeonly_texture_view<value_type, _Rank>& operator= (
    const writeonly_texture_view<value_type, _Rank>& _Other) restrict(amp,cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 `writeonly_texture_view`oggetto da copiare.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a questo `writeonly_texture_view` oggetto.  
  
##  <a name="rank"></a>numero di dimensioni 

 Ottiene il rango di `writeonly_texture_view` oggetto.  
  
```  
static const int rank = _Rank;  
```  
  
##  <a name="set"></a>set 

 Imposta il valore dell'elemento in corrispondenza dell'indice specificato.  
  
```  
void set(
    const index<_Rank>& _Index,  
    const value_type& value) const restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_Index`  
 L'indice dell'elemento.  
  
 `value`  
 Nuovo valore dell'elemento.  
  
##  <a name="ctor"></a>writeonly_texture_view 

 Inizializza una nuova istanza della classe `writeonly_texture_view`.  
  
```  
writeonly_texture_view(
    texture<value_type, 
    _Rank>& _Src) restrict(amp);

 
writeonly_texture_view(
    const writeonly_texture_view<value_type,  
    _Rank>& _Src) restrict(amp,cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_Rank`  
 Il numero di dimensioni della trama.  
  
 `value_type`  
 Tipo degli elementi di trama.  
  
 `_Src`  
 La trama che viene utilizzata per creare il `writeonly_texture_view`.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)

