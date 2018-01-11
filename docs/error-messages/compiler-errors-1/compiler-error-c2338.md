---
title: Errore del compilatore C2338 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C2338
dev_langs: C++
helpviewer_keywords: C2338
ms.assetid: 49bba575-1de4-4963-86c6-ce3226a2ba51
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e0171654bde5b056a7e6695ea5fbbe84edb62f83
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
