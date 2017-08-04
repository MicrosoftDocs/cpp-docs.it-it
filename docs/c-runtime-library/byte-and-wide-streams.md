---
title: Flussi di byte e &quot;wide&quot; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- Byte and Wide Streams
dev_langs:
- C++
helpviewer_keywords:
- byte streams
- wide streams
ms.assetid: 61ef0587-4cbc-4eb8-aae5-4c298dbbc6f9
caps.latest.revision: 8
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
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: c916caf1ee0b39567813921401ee02cbda83d222
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="byte-and-wide-streams"></a>Flussi di byte e "wide"
Un flusso di byte considera un file come una sequenza di byte. All'interno del programma il flusso è una sequenza di byte identici.  
  
 Per contro un flusso wide gestisce un file come sequenza di caratteri multibyte generici, che possono includere un'ampia gamma di regole di codifica. I file binari e di testo vengono comunque letti e scritti come illustrato in precedenza. All'interno del programma il flusso ha l'aspetto della sequenza di caratteri wide corrispondente. Le conversioni tra le due rappresentazioni si verificano all'interno della libreria C standard. In linea di principio le regole di conversione possono essere modificate da una chiamata a [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) che modifica `LC_CTYPE` della categoria. Ogni flusso wide determina le proprie regole di conversione quando si orienta su wide e mantiene queste regole anche se il tipo `LC_CTYPE` della categoria cambia in un secondo tempo.  
  
 Il posizionamento in un flusso wide ha le stesse limitazioni valide per un flusso di testo. È anche possibile che l'indicatore file-position si trovi a gestire una codifica dipendente dallo stato. In genere questa include sia un offset di byte nel flusso sia un oggetto di tipo `mbstate_t`. Di conseguenza l'unico modo affidabile per ottenere una posizione di file all'interno di un flusso di caratteri wide è la chiamata di [fgetpos](../c-runtime-library/reference/fgetpos.md) e l'unico modo affidabile per ripristinare una posizione ottenuta in questo modo è la chiamata di [fsetpos](../c-runtime-library/reference/fsetpos.md).  
  
## <a name="see-also"></a>Vedere anche  
 [File e flussi](../c-runtime-library/files-and-streams.md)   
 [setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)
