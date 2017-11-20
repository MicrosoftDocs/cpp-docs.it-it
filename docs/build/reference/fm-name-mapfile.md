---
title: -Fm (nome file MAP) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /fm
dev_langs: C++
helpviewer_keywords:
- -Fm compiler option [C++]
- mapfiles [C++], creating linker
- files [C++], creating map
- Fm compiler option [C++]
- /Fm compiler option [C++]
ms.assetid: 8154448a-93a7-4546-8e4c-5c44d0aff45d
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 153a91d25a45a86f01885b679f039f41390dc291
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="fm-name-mapfile"></a>/Fm (Specifica file map)
Indica al linker di generare un file MAP contenente un elenco di segmenti nell'ordine in cui appaiono nel file .exe corrispondente o DLL.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Fmpathname  
```  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, i file di mapping viene assegnato il nome base del file di origine corrispondente di C o C++ con una. Eseguire il mapping di estensione.  
  
 Specifica di **/Fm** ha lo stesso effetto come se fosse stato specificato il [/MAP (genera file MAP)](../../build/reference/map-generate-mapfile.md) l'opzione del linker.  
  
 Se si specifica [/c (compila senza collegamenti)](../../build/reference/c-compile-without-linking.md) per disattivare il collegamento, **/Fm** non ha alcun effetto.  
  
 In genere, i simboli globali in un file MAP hanno uno o più caratteri di sottolineatura iniziali perché il compilatore aggiunge un carattere di sottolineatura per i nomi delle variabili. Molti dei simboli globali presenti nel file di mapping vengono utilizzati internamente dal compilatore e librerie standard.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando** .  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [File di output (/ F) opzioni](../../build/reference/output-file-f-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Specifica del nome del percorso](../../build/reference/specifying-the-pathname.md)