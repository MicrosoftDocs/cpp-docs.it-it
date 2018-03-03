---
title: Errore della riga di comando D8016 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- D8016
dev_langs:
- C++
helpviewer_keywords:
- D8016
ms.assetid: eec51312-7471-4f92-94b2-d517cafc8ef5
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 463de86acf0446f125b66ec1cdc3768c6238b630
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="command-line-error-d8016"></a>Errore della riga di comando D8016
opzioni della riga di comando 'opzione1' e 'opzione2' sono incompatibili  
  
 Impossibile specificare insieme le opzioni della riga di comando.  
  
 Controllare le variabili di ambiente, ad esempio CL, per le specifiche di opzione.  
  
 **/CLR** implica **/EHa**, e non è possibile specificare qualsiasi altra **/EH** con l'opzione del compilatore **/clr**. Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
 D8016 potrebbe essere visualizzato dopo l'aggiornamento un [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] progetto 6.0: può abilitare il processo di creazione guidata progetto aggiornamento **/RTC** per ogni file di codice sorgente nel progetto, che esegue l'override di **/RTC** impostazione per il progetto.  Per risolvere, modificare il **/RTC** impostazione per ogni file di codice sorgente nel progetto per l'impostazione predefinita, ovvero l'impostazione di progetto per **/RTC** verrà attivata per ogni file.  
  
 Vedere [/RTC (controlli errore di Run-Time)](../../build/reference/rtc-run-time-error-checks.md) per informazioni sulla modifica di **/RTC** l'impostazione della proprietà.