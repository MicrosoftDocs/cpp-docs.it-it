---
title: Strumenti del linker LNK1256 errore | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- xml
- LNK1256
dev_langs:
- C++
helpviewer_keywords:
- LNK1256
ms.assetid: 55b64b2b-a56b-436c-a55e-ec9c6dcb050e
caps.latest.revision: 9
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
translationtype: Machine Translation
ms.sourcegitcommit: 84964b0a49b236bae056125de8155b18880eb378
ms.openlocfilehash: 02231366d7b20be51e7b918fe7932fc80a38b169
ms.lasthandoff: 02/24/2017

---
# <a name="linker-tools-error-lnk1256"></a>Errore degli strumenti del linker LNK1256
Operazione ALINK non riuscita: motivo  
  
 Una causa comune di LNK1256 è un numero di versione non corretta per un assembly. Il valore 65535 non è consentito per qualsiasi parte del numero di versione dell'assembly. L'intervallo valido per le versioni di assembly è 0-65534.  
  
 LNK1256 può essere causato anche se ALINK non può trovare il contenitore di chiavi denominato. Eliminare il contenitore di chiavi e aggiungerlo nuovamente al CSP del nome sicuro utilizzando [Sn.exe (strumento nome sicuro)](http://msdn.microsoft.com/Library/c1d2b532-1b8e-4c7a-8ac5-53b801135ec6).  
  
 Un altro motivo per LNK1256 è una mancata corrispondenza di versione tra il linker e Alink.dll. Ciò può essere causato da un'installazione danneggiata di Visual Studio. Utilizzare **programmi e funzionalità** nel Pannello di controllo di Windows per ripristinare o reinstallare Visual Studio.  
  
 L'esempio seguente genera l'errore LNK1256:  
  
```  
// LNK1256.cpp  
// compile with: /clr /LD  
// LNK1256 expected  
[assembly:System::Reflection::AssemblyVersionAttribute("1.0.65535")];  
public class CMyClass {  
public:  
   int value;  
};  
```
