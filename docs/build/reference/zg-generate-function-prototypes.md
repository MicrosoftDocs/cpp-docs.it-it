---
title: -Zg (genera i prototipi delle funzioni) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /zg
dev_langs:
- C++
helpviewer_keywords:
- Zg compiler option [C++]
- /Zg compiler option [C++]
- function prototypes, generate function prototypes compiler option
- -Zg compiler option [C++]
- generate function prototypes compiler option
ms.assetid: c8df1b46-24ff-46f2-8356-e0a144b21dd2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8288da0981878b17ad0c2091bf2a45569b51740d
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="zg-generate-function-prototypes"></a>/Zg (Genera i prototipi delle funzioni)
Rimosso. Crea un prototipo di funzione per ogni funzione definita nel file di origine, ma non compila il file di origine.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Zg  
```  
  
## <a name="remarks"></a>Note  
 L'opzione del compilatore non è più disponibile. È stata rimossa in Visual C++ 2015. Questa pagina rimane per gli utenti di versioni precedenti di Visual C++.  
  
 Il prototipo di funzione include il tipo restituito della funzione e un elenco di tipi di argomento. L'elenco di tipi di argomento viene creato dai tipi di parametri formali della funzione. I prototipi di funzione già presenti nel file di origine vengono ignorati.  
  
 L'elenco di prototipi viene scritto nell'output standard. Questo elenco può risultare utile per verificare che gli argomenti effettivi e i parametri formali di una funzione siano compatibili. È possibile salvare l'elenco mediante il reindirizzamento dell'output standard a un file. Quindi, è possibile usare **#include** per rendere l'elenco di prototipi della funzione parte del file di origine. In questo modo, il compilatore esegue un controllo del tipo di argomento.  
  
 Se si usa l'opzione **/Zg** e il programma contiene parametri formali con un tipo struct, enum o unione (o puntatori a questi tipi), la dichiarazione di ogni tipo struct, enum o unione deve avere un tag (nome). Nell'esempio seguente il nome del tag è `MyStruct`.  
  
```C  
// Zg_compiler_option.c  
// compile with: /Zg  
typedef struct MyStruct { int i; } T2;  
void f2(T2 * t) {}  
```  
  
 Il **Zg** opzione è stata deprecata in Visual Studio 2005 ed è stata rimossa in Visual Studio 2015. Il compilatore Visual C++ ha rimosso il supporto per il codice precedente, di tipo C. Per un elenco di opzioni del compilatore obsolete, vedere **deprecate o rimosse le opzioni del compilatore** in [opzioni del compilatore elencate per categoria](../../build/reference/compiler-options-listed-by-category.md).  
  
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