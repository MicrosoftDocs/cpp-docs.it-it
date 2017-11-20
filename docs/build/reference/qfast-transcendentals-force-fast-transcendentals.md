---
title: -Qfast_transcendentals (forzare funzioni trascendenti veloci) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /Qfast_transcendentals
dev_langs: C++
helpviewer_keywords:
- /Qfast_transcendentals
- Force Fast Transcendentals
ms.assetid: 4de24bd1-38e6-49d4-9a05-04c9937d24ac
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 6f5242621074f956c258957297bb1b220e086e70
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="qfasttranscendentals-force-fast-transcendentals"></a>/Qfast_transcendentals (forzare funzioni trascendenti veloci)
Genera il codice inline per le funzioni trascendenti.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Qfast_transcendentals  
```  
  
## <a name="remarks"></a>Note  
 L'opzione del compilatore impone le funzioni trascendenti da convertire in codice inline per migliorare la velocità di esecuzione. Questa opzione ha effetto solo se abbinato a **/fp: tranne** o **/fp: precise**. La generazione di codice inline per le funzioni trascendenti è già il comportamento predefinito in **Fast**.  
  
 Questa opzione non è compatibile con **/fp: strict**. Vedere [/fp (specifica il comportamento a virgola mobile)](../../build/reference/fp-specify-floating-point-behavior.md) per ulteriori informazioni sulle opzioni del compilatore a virgola mobile.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando** .  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni /Q (operazioni di basso livello)](../../build/reference/q-options-low-level-operations.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)