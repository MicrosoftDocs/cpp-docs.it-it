---
title: -V (numero versione) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: article
f1_keywords:
- /v
dev_langs:
- C++
helpviewer_keywords:
- embedding version strings
- /V compiler option [C++]
- version numbers, specifying for .obj
- V compiler option [C++]
- -V compiler option [C++]
ms.assetid: 3e93fb7a-5dfd-49a6-bd49-3dca8052e0f3
caps.latest.revision: 14
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9a940000b5330c4eccdcabcc5a31f0c3e3e74d65
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="v-version-number"></a>/V (Numero versione)
Deprecato. Incorpora una stringa di testo nel file obj.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Vstring  
```  
  
## <a name="arguments"></a>Argomenti  
 `string`  
 Stringa che specifica il numero di versione o informazioni sul copyright per essere incorporati in un file con estensione obj.  
  
## <a name="remarks"></a>Note  
 L'etichetta stringcan un file con estensione obj con un numero di versione o un avviso di copyright. I caratteri spazio o tabulazione devono essere racchiusi tra virgolette doppie (") se fanno parte della stringa. Una barra rovesciata (\\) devono precedere tutte le virgolette se fanno parte della stringa. Uno spazio tra **/V** e `string` è facoltativo.  
  
 È inoltre possibile utilizzare [comment (C/C++)](../../preprocessor/comment-c-cpp.md) con l'argomento di tipo di commento del compilatore per inserire il nome e numero di versione del compilatore nel file con estensione obj.  
  
 Il **/V** opzione è deprecata a partire da Visual Studio 2005. **/V** veniva principalmente utilizzato per supportare la creazione di driver di dispositivo virtuali (VxDs) e funzione non è più supportata dagli strumenti di Visual C++. Per un elenco di opzioni del compilatore obsolete, vedere **deprecate o rimosse le opzioni del compilatore** in [opzioni del compilatore elencate per categoria](../../build/reference/compiler-options-listed-by-category.md).  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando** .  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)