---
title: Errore della riga di comando D8016 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- D8016
dev_langs:
- C++
helpviewer_keywords:
- D8016
ms.assetid: eec51312-7471-4f92-94b2-d517cafc8ef5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3c6ba57b7036aae652b9eb6d885f9105d8bf0826
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42607603"
---
# <a name="command-line-error-d8016"></a>Errore della riga di comando D8016
opzioni della riga di comando 'opzione1' e 'option2' sono incompatibili  
  
 Impossibile specificare contemporaneamente le opzioni della riga di comando.  
  
 Controllare le variabili di ambiente, ad esempio CL, per le specifiche di opzione.  
  
 **/CLR** implica **/EHa**, e non è possibile specificare qualsiasi altra **/EH** con l'opzione del compilatore **/clr**. Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
 D8016 potrebbe essere visualizzato dopo aver aggiornato un progetto di Visual C++ 6.0: può abilitare il processo di creazione guidata aggiornamento progetto **/RTC** per ogni file di codice sorgente nel progetto, che esegue l'override di **/RTC** impostazione per il progetto.  Per risolvere, modificare il **/RTC** imposta per ogni file di codice sorgente nel progetto per l'impostazione predefinita, ovvero l'impostazione di progetto per **/RTC** rimarrà in vigore per ogni file.  
  
 Visualizzare [/RTC (controlli di errore di Run-Time)](../../build/reference/rtc-run-time-error-checks.md) per informazioni su come modificare le **/RTC** l'impostazione della proprietà.