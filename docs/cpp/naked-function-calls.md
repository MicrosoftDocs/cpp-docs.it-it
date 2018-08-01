---
title: Chiamate di funzioni naked | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e395bcb32858bc63b3e848f20a7d794156876e26
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39402029"
---
# <a name="naked-function-calls"></a>Chiamate di funzioni naked
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Le funzioni dichiarate con il **naked** attributo vengono generate senza codice di prologo o epilogo, permettendo di scrivere le proprie sequenze di prologo/epilogo personalizzate utilizzando il [assembler inline](../assembler/inline/inline-assembler.md). Le funzionalità naked vengono fornite come funzionalità avanzata. Tali funzioni consentono di dichiarare una funzione chiamata da un contesto diverso da C/C++ e di conseguenza si basano su presupposti diversi sulla posizione dei parametri o sui registri mantenuti. Gli esempi includono routine come gestori di interrupt. Questa funzionalità è particolarmente utile per i writer dei driver di dispositivo virtuali (VxDs).  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [naked](../cpp/naked-cpp.md)  
  
-   [Regole e limitazioni per le funzioni naked](../cpp/rules-and-limitations-for-naked-functions.md)  
  
-   [Considerazioni per la scrittura di codice di prologo/epilogo](../cpp/considerations-for-writing-prolog-epilog-code.md)  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzioni di chiamata](../cpp/calling-conventions.md)