---
title: Classe wbuffer_convert | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- stdext::cvt::wbuffer_convert
- wbuffer_convert
- cvt::wbuffer_convert
- wbuffer/stdext::cvt::wbuffer_convert
dev_langs:
- C++
helpviewer_keywords:
- wbuffer_convert class
ms.assetid: 4a56f9bf-4138-4612-b516-525fea401358
caps.latest.revision: 20
author: corob-msft
ms.author: corob
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 4ecf60434799708acab4726a95380a2d3b9dbb3a
ms.openlocfilehash: 8efbf80606e1196b7376a264e63b87e89e07b53d
ms.contentlocale: it-it
ms.lasthandoff: 04/19/2017

---
# <a name="wbufferconvert-class"></a>Classe wbuffer_convert
Descrive un buffer del flusso che controlla la trasmissione di elementi da e verso un buffer del flusso di byte.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Codecvt, class Elem = wchar_t, class Traits = std::char_traits<Elem>>
class wbuffer_convert
 : public std::basic_streambuf<Elem, Traits>
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Codecvt`|Facet delle [impostazioni locali](../standard-library/locale-class.md) che rappresenta l'oggetto di conversione.|  
|`Elem`|Tipo di elemento a caratteri "wide".|  
|`Traits`|Tratti associati a *Elem*.|  
  
## <a name="remarks"></a>Note  
 La classe modello descrive un buffer del flusso che controlla la trasmissione di elementi di tipo `_Elem`, i cui tratti di carattere sono descritti dalla classe `Traits`, verso e da un buffer del flusso di byte di tipo `std::streambuf`.  
  
 La conversione tra una sequenza di valori `Elem` e sequenze multibyte viene eseguita da un oggetto della classe `Codecvt<Elem, char, std::mbstate_t>`, che soddisfa i requisiti del facet standard di conversione del codice `std::codecvt<Elem, char, std::mbstate_t>`.  
  
 Un oggetto di questa classe modello archivia:  
  
-   Un puntatore al buffer del flusso di byte sottostante  
  
-   Un puntatore all'oggetto di conversione allocato, che viene liberato quando viene eliminato definitivamente l'oggetto [wbuffer_convert](../standard-library/wbuffer-convert-class.md).

