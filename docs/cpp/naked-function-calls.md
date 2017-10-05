---
title: Chiamate di funzione naked | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- virtual device drivers
- VXD virtual device drivers
- virtual device drivers, naked function calls
- naked functions
- prolog code
- epilog code
- naked keyword [C++]
- naked keyword [C++], storage-class attribute
ms.assetid: 2a66847a-a43f-4541-a7be-c9f5f29b5fdb
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
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: dcf93756bf4d10feb63238a1ecf3b6d3f8b340f6
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="naked-function-calls"></a>Chiamate di funzioni naked
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Le funzioni dichiarate con la `naked` attributo vengono generate senza codice di prologo o epilogo, consentendo di scrivere le proprie sequenze di prologo/epilogo personalizzate utilizzando il [assembler inline](../assembler/inline/inline-assembler.md). Le funzionalità naked vengono fornite come funzionalità avanzata. Tali funzioni consentono di dichiarare una funzione chiamata da un contesto diverso da C/C++ e di conseguenza si basano su presupposti diversi sulla posizione dei parametri o sui registri mantenuti. Gli esempi includono routine come gestori di interrupt. Questa funzionalità è particolarmente utile per i writer dei driver di dispositivo virtuali (VxDs).  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [naked](../cpp/naked-cpp.md)  
  
-   [Regole e limitazioni per le funzioni naked](../cpp/rules-and-limitations-for-naked-functions.md)  
  
-   [Considerazioni per la scrittura di codice di prologo/epilogo](../cpp/considerations-for-writing-prolog-epilog-code.md)  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzioni di chiamata](../cpp/calling-conventions.md)
