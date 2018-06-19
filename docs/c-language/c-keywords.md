---
title: Parole chiave C | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- keywords [C]
- redefining keywords
- Microsoft-specific keywords
ms.assetid: 2d932335-97bf-45cd-b367-4ae00db0ff42
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 98d815a8b0d185ccfb2ea89f653cd34d54fbd6ed
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32388240"
---
# <a name="c-keywords"></a>Parole chiave C
Le parole chiave sono parole con significato particolare per il compilatore C. Nelle fasi di conversione 7 e 8 un identificatore non può avere la stessa ortografia e gli stessi caratteri maiuscoli/minuscoli di una parola chiave C. Per una descrizione delle [fasi di conversione](../preprocessor/phases-of-translation.md), vedere *Riferimenti al preprocessore*. Per informazioni sugli identificatori, vedere [Identificatori](../c-language/c-identifiers.md). Nel linguaggio C vengono utilizzate le parole chiave seguenti:  
  
|||||  
|-|-|-|-|  
|**auto**|**double**|**int**|**struct**|  
|**break**|**else**|**long**|**switch**|  
|**case**|**enum**|**register**|**typedef**|  
|**char**|**extern**|**return**|**union**|  
|**const**|**float**|**short**|**unsigned**|  
|**continue**|**for**|**signed**|**void**|  
|**default**|**goto**|**sizeof**|**volatile**|  
|**do**|**if**|**static**|**while**|  
  
 Non è possibile ridefinire le parole chiave. È possibile tuttavia specificare il testo da sostituire alle parole chiave prima della compilazione tramite le [direttive per il preprocessore](../preprocessor/preprocessor-directives.md) C.  
  
 **Sezione specifica Microsoft**  
  
 Lo standard ANSI C consente agli identificatori con due caratteri di sottolineatura iniziali di essere riservati per le implementazioni del compilatore. Di conseguenza, la convenzione di Microsoft consiste nel far precedere i nomi delle parole chiave specifiche di Microsoft da un doppio carattere di sottolineatura. Queste parole non possono essere usate come nomi di identificatori. Per una descrizione delle regole ANSI per la denominazione degli identificatori, incluso l'uso del doppio carattere di sottolineatura, vedere [Identificatori](../c-language/c-identifiers.md).  
  
 Le parole chiave e gli identificatori speciali seguenti sono riconosciuti dal compilatore C Microsoft:  
  
|||||  
|-|-|-|-|  
|**__asm**|**dllimport**2|**__int8**|**naked**2|  
|**__based**1|**__except**|**__int16**|**__stdcall**|  
|**__cdecl**|**__fastcall**|**__int32**|**thread**2|  
|**__declspec**|**__finally**|**__int64**|**__try**|  
|**dllexport**2|**__inline**|**__leave**||  
  
 1. La parola chiave **__based** ha usi limitati nelle compilazioni di destinazione a 32 bit e a 64 bit.  
  
 2. Questi sono identificatori speciali se usati con **__declspec**. L'uso di questi identificatori in altri contesti non è limitato.  
  
 Le estensioni Microsoft sono attivate per impostazione predefinita. Per assicurarsi che i programmi siano completamente portabili, è possibile disabilitare le estensioni Microsoft specificando l'opzione della riga di comando /Za (compilare per la compatibilità ANSI) durante la compilazione. In questo caso, le parole chiave specifiche di Microsoft sono disabilitate.  
  
 Quando le estensioni Microsoft sono abilitate, è possibile utilizzare le parole chiave elencate in precedenza nei programmi. Per la compatibilità ANSI, la maggior parte di tali parole chiave è preceduta da un doppio carattere di sottolineatura. Le quattro eccezioni **dllexport**, **dllimport**, **naked** e **thread** vengono usate solo con **__declspec** e non richiedono un doppio carattere di sottolineatura iniziale. Ai fini della compatibilità con le versioni precedenti, sono supportate le versioni con singolo carattere di sottolineatura delle parole chiave rimanenti.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Elementi di C](../c-language/elements-of-c.md)