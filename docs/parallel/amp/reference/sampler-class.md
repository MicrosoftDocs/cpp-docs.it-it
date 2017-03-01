---
title: Classe sampler | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 9a6a9807-497d-402d-b092-8c4d86275b80
caps.latest.revision: 7
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
ms.sourcegitcommit: fc190feb08d9b221cd1cc21a9c91ad567c86c848
ms.openlocfilehash: 090e05e294646b7571a3d06ca8ed23583a306756
ms.lasthandoff: 02/24/2017

---
# <a name="sampler-class"></a>Classe sampler
La classe campionatore aggrega le informazioni di configurazione di campionamento da utilizzare per il campionamento della trama.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class sampler;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore sampler](#ctor)|Di overload. Crea un'istanza di prova.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[get_address_mode (metodo)](#get_address_mode)|Restituisce il `address_mode` che è associato l'oggetto campionatore.|  
|[get_border_color (metodo)](#get_border_color)|Restituisce il colore del bordo con l'oggetto campionatore associato.|  
|[get_filter_mode (metodo)](#get_filter_mode)|Restituisce il `filter_mode` che è associato l'oggetto campionatore.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operatore = (operatore)](#operator_eq)|Di overload. Operatore di assegnazione.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[address_mode (membro dati)](#address_mode)|Ottiene la modalità di indirizzamento di `sampler` oggetto.|  
|[border_color (membro dati)](#border_color)|Ottiene il colore del bordo di `sampler` oggetto.|  
|[filter_mode (membro dati)](#filter_mode)|Ottiene la modalità di filtro del `sampler` oggetto.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `sampler`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp_graphics.h  
  
 **Namespace:** Concurrency:: Graphics  
  
##  <a name="a-namectora-sampler"></a><a name="ctor"></a>campionatore 

 Costruisce un'istanza di [classe sampler](sampler-class.md).  
  
```  
sampler() restrict(cpu);

 *// [1] default constructor  
 
sampler(// [2] constructor  
    filter_mode _Filter_mode) restrict(cpu);

 
sampler(// [3] constructor  
    address_mode _Address_mode,  
    float_4 _Border_color = float_4(0.0f,
    0.0f,
    0.0f,
    0.0f)) restrict(cpu);

 
sampler(// [4] constructor  
    filter_mode _Filter_mode,  
    address_mode _Address_mode,  
    float_4 _Border_color = float_4(0.0f,
    0.0f,
    0.0f,
    0.0f)) restrict(cpu);

 
sampler(// [5] copy constructor  
    const sampler& _Other) restrict(amp,
    cpu);

 
sampler(// [6] move constructor  
    sampler&& _Other) restrict(amp,
    cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_Filter_mode`  
 La modalità di filtraggio da utilizzare per il campionamento.  
  
 `_Address_mode`  
 Modalità di indirizzamento da utilizzare per tutte le dimensioni di campionamento.  
  
 `_Border_color`  
 Colore del bordo da utilizzare se la modalità di indirizzamento è address_border. Il valore predefinito è `float_4(0.0f, 0.0f, 0.0f, 0.0f)`.  
  
 `_Other`  
 [5] costruttore di copia  
 Il `sampler` oggetto da copiare nel nuovo `sampler` istanza.  
  
 [6] costruttore di spostamento  
 Il `sampler` oggetti da spostare nel nuovo `sampler` istanza.  
  
##  <a name="a-nameaddressmodea-addressmode"></a><a name="address_mode"></a>address_mode 

 Ottiene la modalità di indirizzamento di `sampler` oggetto.  
  
```  
__declspec(property(get= get_address_mode)) Concurrency::graphics::address_mode address_mode;  
```  
  
##  <a name="a-namebordercolora-bordercolor"></a><a name="border_color"></a>border_color 

 Ottiene il colore del bordo di `sampler` oggetto.  
  
```  
__declspec(property(get= get_border_color)) Concurrency::graphics::float_4 border_color;  
```  
  
##  <a name="a-namefiltermodea-filtermode"></a><a name="filter_mode"></a>filter_mode 

 Ottiene la modalità di filtro del `sampler` oggetto.  
  
```  
__declspec(property(get= get_filter_mode)) Concurrency::graphics::filter_mode filter_mode;  
```  
  
##  <a name="a-namegetaddressmodea-getaddressmode"></a><a name="get_address_mode"></a>get_address_mode 

 Restituisce la modalità di filtro che è configurata per l'oggetto `sampler`.  
  
```  
Concurrency::graphics::address_mode get_address_mode() const __GPU;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La modalità di indirizzamento che è configurata per il campionatore.  
  
##  <a name="a-namegetbordercolora-getbordercolor"></a><a name="get_border_color"></a>get_border_color 

 Restituisce il colore del bordo che è configurato per l'oggetto `sampler`.  
  
```  
Concurrency::graphics::float_4 get_border_color() const restrict(amp, cpu);
```  
  
### <a name="return-value"></a>Valore restituito  
 Float_4 che contiene il colore del bordo.  
  
##  <a name="a-namegetfiltermodea-getfiltermode"></a><a name="get_filter_mode"></a>get_filter_mode 

 Restituisce la modalità di filtro che è configurata per l'oggetto `sampler`.  
  
```  
Concurrency::graphics::filter_mode get_filter_mode() const restrict(amp, cpu);
```  
  
### <a name="return-value"></a>Valore restituito  
 La modalità di filtro che è configurata per il campionatore.  
  
##  <a name="a-nameoperatoreqa-operator"></a><a name="operator_eq"></a>operatore = 

 Assegna il valore di un altro oggetto campionatore di un campionatore esistente.  
  
```  
sampler& operator= (// [1] copy assignment operator const sampler& _Other) restrict(amp,
    cpu);

 
sampler& operator= (// [2] move assingment operator sampler&& _Other) restrict(amp,
    cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 [1] operatore di assegnazione di copia  
 Il `sampler` oggetto da copiare in questa `sampler`.  
  
 [2] operatore di assegnazione spostamento  
 Il `sampler` per spostarsi in questo oggetto `sampler`.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a questa istanza di prova.  
  
## <a name="see-also"></a>Vedere anche  
 [Concurrency:: Graphics Namespace](concurrency-graphics-namespace.md)

