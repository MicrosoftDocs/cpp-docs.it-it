---
title: Errore del compilatore C2338 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2338
dev_langs:
- C++
helpviewer_keywords:
- C2338
ms.assetid: 49bba575-1de4-4963-86c6-ce3226a2ba51
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 156074f20517c1d2e2f4fdb4ac5c54d6cf014276
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33222306"
---
# <a name="compiler-error-c2338"></a>Errore del compilatore C2338  
  
> *Messaggio di errore*  
  
Questo errore può essere causato da un `static_assert` errore durante la compilazione. Il messaggio viene fornito dal `static_assert` parametri.   
  
Questo messaggio di errore può anche essere generato da provider esterni al compilatore. Nella maggior parte dei casi, questi errori vengono segnalati da un provider di attributi DLL, ad esempio ATLPROV. Alcune forme comuni di questo messaggio includono:

> '*attributo*' Provider di attributi Atl: errore ATL*numero* *messaggio*  
  
> Utilizzo non corretto dell'attributo '*attributo*'
  
> '*utilizzo*': formato non corretto per l'attributo 'utilizzo'  
  
Questi errori spesso sono irreversibili e possono essere seguiti da un errore irreversibile del compilatore.  
  
Per risolvere questi problemi, correggere l'utilizzo dell'attributo. Ad esempio, in alcuni casi, i parametri dell'attributo devono essere dichiarati prima di poter essere usati. Se viene fornito un numero di errore ATL, consultare la documentazione per tale errore per informazioni più specifiche.  
