---
title: -GH (Attiva funzione Hook pexit) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- _pexit
dev_langs:
- C++
helpviewer_keywords:
- /Gh compiler option [C++]
- Gh compiler option [C++]
- _pexit function
- -Gh compiler option [C++]
ms.assetid: 93181453-2676-42e5-bf63-3b19e07299b6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 57e11c27af36eb539b22f3833a73341ff3065e97
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32374505"
---
# <a name="gh-enable-pexit-hook-function"></a>/GH (Attiva funzione hook _pexit)
Chiamate di `_pexit` funzione alla fine di ogni metodo o funzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/GH  
```  
  
## <a name="remarks"></a>Note  
 Il `_pexit` funzione non è parte di alcuna libreria ed è responsabilità dell'utente per fornire una definizione per `_pexit`.  
  
 A meno che non si prevede di chiamare in modo esplicito `_pexit`, non è necessario fornire un prototipo. La funzione deve apparire come se avesse il seguente prototipo e deve inserire il contenuto di tutti i registri in ingresso ed estrarre il contenuto non modificato in uscita:  
  
```  
void __declspec(naked) _cdecl _pexit( void );  
```  
  
 `_pexit` è simile a `_penter`; vedere [/Gh (Attiva funzione Hook nella penter)](../../build/reference/gh-enable-penter-hook-function.md) per un esempio di come scrivere un `_pexit` (funzione).  
  
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