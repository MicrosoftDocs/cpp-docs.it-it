---
title: -H (limita la lunghezza dei nomi esterni) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /h
dev_langs: C++
helpviewer_keywords:
- public name length
- /H compiler option [C++]
- H compiler option [C++]
- external names
- -H compiler option [C++]
ms.assetid: de701dd3-ed04-4c88-8195-960d2520ec2e
caps.latest.revision: "14"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 1a69bf1b4e6b2e552bd73594a2c33f092570b94c
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="h-restrict-length-of-external-names"></a>/H (Limita la lunghezza dei nomi esterni)
Deprecato. Limita la lunghezza dei nomi esterni.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Hnumber  
```  
  
## <a name="arguments"></a>Argomenti  
 `number`  
 Specifica la lunghezza massima dei nomi esterni consentiti in un programma.  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, la lunghezza dei nomi esterni (pubblici) è 2.047 caratteri. Questo vale per i programmi C e C++. Utilizzando **/H** possibile diminuire solo la lunghezza massima consentita di identificatori, non aumentare il valore. Uno spazio tra **/H** e `number` è facoltativo.  
  
 Se un programma contiene nomi esterni più lunghi `number`, i caratteri aggiuntivi vengono ignorati. Se si compila un programma senza **/H** e se un identificatore contiene più di 2.047 caratteri, il compilatore genererà [irreversibile C1064 errore](../../error-messages/compiler-errors-1/fatal-error-c1064.md).  
  
 Il limite di lunghezza include qualsiasi creato dal compilatore carattere di sottolineatura (_) o simbolo di chiocciola (@). Questi caratteri fanno parte dell'identificatore e richiedere un percorso significativo.  
  
-   Il compilatore aggiunge un carattere di sottolineatura (_) ai nomi modificati dal `__cdecl` (impostazione predefinita) e `__stdcall` convenzioni di chiamata e un carattere simbolo di chiocciola (@) ai nomi modificati dal `__fastcall` convenzione di chiamata.  
  
-   Il compilatore aggiunge informazioni sulle dimensioni di argomento ai nomi modificati dal `__fastcall` e `__stdcall` convenzioni di chiamata e aggiunge informazioni sul tipo per i nomi di C++.  
  
 È possibile **/H** utile:  
  
-   Quando si creano i programmi con linguaggio misto o portatili.  
  
-   Quando si utilizzano strumenti che impongono dei limiti di lunghezza degli identificatori esterni.  
  
-   Quando si desidera limitare la quantità di spazio utilizzata dai simboli in una build di debug.  
  
 Nell'esempio seguente usa **/H** può comportare errori se le lunghezze degli identificatori sono troppo limitati:  
  
```cpp  
// compiler_option_H.cpp  
// compile with: /H5  
// processor: x86  
// LNK2005 expected  
void func1(void);  
void func2(void);  
  
int main() { func1(); }  
  
void func1(void) {}  
void func2(void) {}  
```  
  
 È inoltre necessario fare attenzione quando si utilizza il **/H** opzione a causa degli identificatori del compilatore predefiniti. Se la lunghezza massima dell'identificatore è troppo piccola, alcuni identificatori predefiniti saranno libreria non risolte, nonché alcune chiamate di funzione. Ad esempio, se il `printf` funzione viene utilizzata e l'opzione **/H5** è specificato in fase di compilazione, il simbolo **prin** verrà creata per fare riferimento a `printf`, e questo non verrà trovato nella libreria.  
  
 Utilizzo di **/H** non è compatibile con [/GL (Ottimizzazione intero programma)](../../build/reference/gl-whole-program-optimization.md).  
  
 Il **/H** opzione è deprecata a partire da Visual Studio 2005; sono stati aumentati i limiti di lunghezza massima e **/H** non è più necessario. Per un elenco di opzioni del compilatore obsolete, vedere **deprecate o rimosse le opzioni del compilatore** in [opzioni del compilatore elencate per categoria](../../build/reference/compiler-options-listed-by-category.md).  
  
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