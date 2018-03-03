---
title: "-/Wp64 (rileva errori di portabilità a 64 Bit) | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCCLWCECompilerTool.Detect64BitPortabilityProblems
- VC.Project.VCCLCompilerTool.Detect64BitPortabilityProblems
- /wp64
dev_langs:
- C++
helpviewer_keywords:
- 64-bit compiler [C++], detecting portability problems
- /Wp64 compiler option [C++]
- -Wp64 compiler option [C++]
- Wp64 compiler option [C++]
ms.assetid: 331ae5aa-e627-4d03-8f63-dd2c2d76dadd
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 59784b713ce1c40cb9b946bc885827fb7141772f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="wp64-detect-64-bit-portability-issues"></a>/Wp64 (Rileva errori di portabilità a 64 bit)

Questa opzione del compilatore è obsoleta. Nelle versioni di Visual Studio precedenti a Visual Studio 2013, rileva i problemi di portabilità a 64 bit nei tipi contrassegnati anche con la parola chiave [__w64](../../cpp/w64.md) .  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Wp64  
```  
  
## <a name="remarks"></a>Note  

Per impostazione predefinita, nelle versioni di Visual Studio precedenti a Visual Studio 2013, il **/Wp64** l'opzione del compilatore è disattivata nel compilatore Visual C++ che compila x86 a 32 bit, codice e nel compilatore Visual C++ che consente di compilare 64 bit, x64 codice.  
  
> [!IMPORTANT]
>  L'opzione del compilatore [/Wp64](../../build/reference/wp64-detect-64-bit-portability-issues.md) e la parola chiave [__w64](../../cpp/w64.md) sono deprecate in Visual Studio 2010 e Visual Studio 2012 e non sono supportare a partire da Visual Studio 2013. Se si converte un progetto che usa questa opzione, non verrà eseguita la migrazione dell'opzione durante la conversione. Per usare questa opzione in Visual Studio 2010 o Visual Studio 2012, è necessario digitare l'opzione del compilatore in **Altre opzioni** nella sezione **Riga di comando** delle proprietà del progetto. Se si usa l'opzione del compilatore **/Wp64** nella riga di comando, il compilatore visualizza l'avviso della riga di comando D9002. Invece di usare questa opzione e questa parola chiave per rilevare i problemi della portabilità a 64 bit, usare un compilatore di Visual C++ che ha come destinazione una piattaforma a 64 bit e specificare l'opzione [/W4](../../build/reference/compiler-option-warning-level.md) . Per ulteriori informazioni, vedere [configurare Visual C++ per x64 a 64 bit, destinazioni](../../build/configuring-programs-for-64-bit-visual-cpp.md).  
  
Le variabili dei tipi seguenti vengono testate su un sistema operativo a 32 bit come se fossero usate in un sistema operativo a 64 bit:  
  
-   int  
  
-   long  
  
-   puntatore  
  
 Se si compila regolarmente l'applicazione con un compilatore che crea 64 bit, x64 codice, è possibile disabilitare semplicemente **/Wp64** nelle compilazioni a 32 bit perché il compilatore a 64 bit rileverà tutti i problemi. Per ulteriori informazioni su come sistema operativo Windows a 64 bit di destinazione, vedere [configurare Visual C++ per x64 a 64 bit, destinazioni](../../build/configuring-programs-for-64-bit-visual-cpp.md).  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  
  
     Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando** .  
  
4.  Modificare la casella **Opzioni aggiuntive** per includere **/Wp64**.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Detect64BitPortabilityProblems%2A>.  
  
## <a name="see-also"></a>Vedere anche  

[Opzioni del compilatore](../../build/reference/compiler-options.md)   
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
[Configurare Visual C++ per destinazioni x64 a 64 bit](../../build/configuring-programs-for-64-bit-visual-cpp.md)