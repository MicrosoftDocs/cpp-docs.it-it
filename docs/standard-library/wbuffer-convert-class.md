---
title: Classe wbuffer_convert | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: xlocmon/stdext::cvt::wbuffer_convert
dev_langs: C++
helpviewer_keywords: wbuffer_convert class
ms.assetid: 4a56f9bf-4138-4612-b516-525fea401358
caps.latest.revision: "20"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: cee0951401c43cb72d58bf7e9e61e4f4a89d6675
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
