---
description: 'Altre informazioni su: errore degli strumenti del linker LNK1256'
title: Errore degli strumenti del linker LNK1256
ms.date: 11/04/2016
f1_keywords:
- LNK1256
helpviewer_keywords:
- LNK1256
ms.assetid: 55b64b2b-a56b-436c-a55e-ec9c6dcb050e
ms.openlocfilehash: 33dc240e194d93253f3bbf3a5fcd56722b6634d1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97193799"
---
# <a name="linker-tools-error-lnk1256"></a>Errore degli strumenti del linker LNK1256

Operazione ALINK non riuscita: motivo

Una causa comune di LNK1256 è un numero di versione non corretta per un assembly. Il valore 65535 non è consentito per qualsiasi parte del numero di versione dell'assembly. L'intervallo valido per le versioni degli assembly è 0-65534.

LNK1256 può essere causato anche se ALINK non può trovare il contenitore di chiavi denominato. Eliminare il contenitore di chiavi e aggiungerlo di nuovo al CSP con nome sicuro usando [Sn.exe (strumento nome sicuro)](/dotnet/framework/tools/sn-exe-strong-name-tool).

Un altro motivo per LNK1256 è una mancata corrispondenza di versione tra il linker e Alink.dll. Ciò può essere causato da un'installazione danneggiata di Visual Studio. Usare **programmi e funzionalità** nel pannello di controllo di Windows per ripristinare o reinstallare Visual Studio.

L'esempio seguente genera l'errore LNK1256:

```cpp
// LNK1256.cpp
// compile with: /clr /LD
// LNK1256 expected
[assembly:System::Reflection::AssemblyVersionAttribute("1.0.65535")];
public class CMyClass {
public:
   int value;
};
```
