---
title: Strumenti del linker LNK1256 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- xml
- LNK1256
dev_langs:
- C++
helpviewer_keywords:
- LNK1256
ms.assetid: 55b64b2b-a56b-436c-a55e-ec9c6dcb050e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6e4039dccb4dc8abd421b4622bbe928931f7f396
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-error-lnk1256"></a>Errore degli strumenti del linker LNK1256
Operazione ALINK non riuscita: motivo  
  
 Una causa comune di LNK1256 è un numero di versione non corretta per un assembly. Il valore 65535 non è consentito per qualsiasi parte del numero di versione dell'assembly. L'intervallo valido per le versioni di assembly è 0 - 65534.  
  
 LNK1256 può essere causato anche se ALINK non può trovare il contenitore di chiavi denominato. Eliminare il contenitore di chiavi e aggiungerlo di nuovo a CSP del nome sicuro utilizzando [Sn.exe (strumento nome sicuro)](/dotnet/framework/tools/sn-exe-strong-name-tool).  
  
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