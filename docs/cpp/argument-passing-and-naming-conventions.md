---
title: Passaggio di argomenti e convenzioni di denominazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- argument passing [C++], conventions
- arguments [C++], widening
- coding conventions, arguments
- arguments [C++], passing
- registers, return values
- thiscall keyword [C++]
- naming conventions [C++], arguments
- arguments [C++], naming
- passing arguments [C++], conventions
- conventions [C++], argument names
ms.assetid: de468979-eab8-4158-90c5-c198932f93b9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 43aa3430b641f6333c6c35d618f9e9de123b7390
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="argument-passing-and-naming-conventions"></a>Passaggio di argomenti e convenzioni di denominazione
**Sezione specifica Microsoft**  
  
 I compilatori di Visual C++ consentono di specificare le convenzioni per passare argomenti e valori restituiti tra funzioni e chiamanti. Non tutte le convenzioni sono disponibili in tutte le piattaforme supportate e alcune convenzioni utilizzano implementazioni specifiche della piattaforma. Nella maggior parte dei casi, le parole chiave o le opzioni del compilatore che specificano una convenzione non supportata su una determinata piattaforma vengono ignorate e viene utilizzata la convenzione predefinita della piattaforma.  
  
 Nelle piattaforme x86, tutti gli argomenti vengono estesi a 32 bit quando vengono passati. I valori restituiti vengono estesi anche a 32 bit e vengono restituiti nel registro EAX, eccetto le strutture a 8 byte, che vengono restituite nella coppia di registri EDX:EAX. Le strutture di dimensioni maggiori vengono restituite nel registro EAX come puntatori alle strutture di ritorno nascoste. I parametri vengono inseriti nello stack da destra a sinistra. Le strutture che non sono POD non verranno restituite nei registri.  
  
 Il compilatore genera un codice di epilogo e di prologo per salvare e ripristinare i registri ESI, EDI, EBX e EBP, se sono utilizzati nella funzione.  
  
> [!NOTE]
>  Quando uno struct, un'unione o una classe vengono restituiti da una funzione per valore, tutte le definizioni del tipo devono essere uguali, altrimenti il programma può avere esito negativo in fase di esecuzione.  
  
 Per informazioni su come definire il proprio codice di prologo ed epilogo della funzione, vedere [chiamate di funzione Naked](../cpp/naked-function-calls.md).  
  
 Per informazioni sull'impostazione predefinita le convenzioni di chiamata nel codice che le piattaforme x64 destinazioni, vedere [Panoramica x64 convenzioni di chiamata](../build/overview-of-x64-calling-conventions.md). Per informazioni sui problemi di convenzione di chiamata nel codice destinato a piattaforme ARM, vedere [problemi comuni di migrazione di Visual C++ ARM](../build/common-visual-cpp-arm-migration-issues.md).  
  
 Le seguenti convenzioni di chiamata sono supportate dal compilatore Visual C/C++.  
  
|Parola chiave|Pulizia dello stack|Passaggio dei parametri|  
|-------------|-------------------|-----------------------|  
|[__cdecl](../cpp/cdecl.md)|Chiamante|Inserisce i parametri nello stack in ordine inverso (da destra a sinistra)|  
|[__clrcall](../cpp/clrcall.md)|N/D|Carica in ordine i parametri nello stack dell'espressione CLR (da sinistra a destra).|  
|[__stdcall](../cpp/stdcall.md)|Chiamato|Inserisce i parametri nello stack in ordine inverso (da destra a sinistra)|  
|[__fastcall](../cpp/fastcall.md)|Chiamato|Archiviati nei registri, quindi inseriti nello stack|  
|[__thiscall](../cpp/thiscall.md)|Chiamato|Inserito nello stack. **questo** puntatore archiviato in ECX|  
|[__vectorcall](../cpp/vectorcall.md)|Chiamato|Archiviato nei registri, quindi sottoposto a push nello stack in ordine inverso (da destra a sinistra)|  
  
 Per informazioni correlate, vedere [convenzioni di chiamata Obsolete](../cpp/obsolete-calling-conventions.md).  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzioni di chiamata](../cpp/calling-conventions.md)