---
title: -Fe (nome al File EXE) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /fe
dev_langs: C++
helpviewer_keywords:
- -Fe compiler option [C++]
- executable files, renaming
- rename file compiler option [C++]
- /Fe compiler option [C++]
- Fe compiler option [C++]
ms.assetid: 49f594fd-5e94-45fe-a1bf-7c9f2abb6437
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 83965ef2bf64f77dbcb1eb9832e7178c30260d16
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fe-name-exe-file"></a>/Fe (Specifica file EXE)
Specifica un nome e una directory per il file .exe o DLL creato dal compilatore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Fepathname  
```  
  
## <a name="remarks"></a>Note  
 Senza questa opzione, il compilatore assegna al file un nome predefinito utilizzando il nome base del primo file di origine o un oggetto specificato nella riga di comando e l'estensione .exe o DLL.  
  
 Se si specifica il[/c (compila senza collegamenti)](../../build/reference/c-compile-without-linking.md)per eseguire la compilazione senza collegamento, **/Fe** non ha alcun effetto.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic su di **generale**pagina delle proprietà.  
  
4.  Modificare il **File di Output** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.OutputFile%2A>.  
  
## <a name="example"></a>Esempio  
 Riga di comando seguente compila e collega tutti i file di origine C nella directory corrente. Il file eseguibile risultante è denominato PROCESS.exe e viene creato nella directory C:\BIN.  
  
```  
CL /FeC:\BIN\PROCESS *.C  
```  
  
## <a name="example"></a>Esempio  
 Riga di comando seguente crea un file eseguibile in `C:\BIN` con lo stesso nome di base del primo file di origine o oggetto:  
  
```  
CL /FeC:\BIN\ *.C  
```  
  
## <a name="see-also"></a>Vedere anche  
 [File di output (/ F) opzioni](../../build/reference/output-file-f-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Specifica del nome del percorso](../../build/reference/specifying-the-pathname.md)