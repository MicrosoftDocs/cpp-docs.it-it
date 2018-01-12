---
title: '-Zc: strictStrings (disabilitare la conversione del tipo di valore letterale stringa) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /Zc:strictStrings
- strictStrings
dev_langs: C++
helpviewer_keywords:
- /Zc:strictStrings
- -Zc compiler options (C++)
- strictStrings
- /Zc compiler options (C++)
- Zc compiler options (C++)
ms.assetid: b7eb3f3b-82c1-48a2-8e63-66bad7397b46
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f316c5fc9209f968219d770a15e6576880b69954
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="zcstrictstrings-disable-string-literal-type-conversion"></a>/Zc:strictStrings (Disabilitare la conversione del tipo di valore letterale stringa)
Quando specificato, il compilatore richiede la stretta conformità con la qualificazione `const` per i puntatori inizializzati mediante valori letterali di stringa.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Zc:strictStrings[-]  
```  
  
## <a name="remarks"></a>Note  
 Se **/Zc: strictstrings** è specificato, il compilatore impone C++ standard `const` qualifiche per i valori letterali stringa, come tipo ' matrice di `const char`' o ' matrice `const wchar_t`', in base alla dichiarazione. I valori letterali di stringa non sono modificabili e un tentativo di modificare il contenuto di uno di questi valori provoca un errore di violazione di accesso in fase di esecuzione. È necessario dichiarare un puntatore di stringa come `const` per inizializzarlo mediante un valore letterale di stringa o usare un oggetto `const_cast` per inizializzare un puntatore non `const`. Per impostazione predefinita, oppure se **/Zc:strictStrings-** è specificato, il compilatore non impone C++ standard `const` qualifiche per i puntatori di stringa inizializzati mediante valori letterali stringa.  
  
 Utilizzare il **/Zc: strictstrings** opzione per impedire la compilazione del codice non corretto. Questo esempio mostra in che modo un semplice errore di dichiarazione provoca un arresto anomalo in fase di esecuzione:  
  
```cpp  
// strictStrings_off.cpp  
// compile by using: cl /W4 strictStrings_off.cpp  
int main() {  
   wchar_t* str = L"hello";  
   str[2] = L'a'; // run-time error: access violation  
}  
```  
  
 Quando **/Zc: strictstrings** è abilitato, lo stesso codice segnala un errore nella dichiarazione di `str`.  
  
```cpp  
// strictStrings_on.cpp  
// compile by using: cl /Zc:strictStrings /W4 strictStrings_on.cpp  
int main() {  
   wchar_t* str = L"hello"; // error: Conversion from string literal   
   // loses const qualifier  
   str[2] = L'a';   
}  
```  
  
 Se si usa `auto` per dichiarare un puntatore di stringa, il compilatore crea automaticamente la dichiarazione del tipo di puntatore `const` corretta. Il tentativo di modificare il contenuto di un puntatore `const` viene segnalato dal compilatore come errore.  
  
> [!NOTE]
>  La libreria Standard C++ in [!INCLUDE[cpp_dev12_long](../../build/reference/includes/cpp_dev12_long_md.md)] non supporta il **/Zc: strictstrings** si basa l'opzione del compilatore in modalità debug. Se viene visualizzato più [C2665](../../error-messages/compiler-errors-2/compiler-error-c2665.md) errori nella compilazione di output, questa potrebbe essere la causa.  
  
 Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare il **C/C++** cartella.  
  
3.  Selezionare il **riga di comando** pagina delle proprietà.  
  
4.  Modificare il **opzioni aggiuntive** proprietà da includere `/Zc:strictStrings` e quindi scegliere **OK**.  
  
## <a name="see-also"></a>Vedere anche  
 [/Zc (conformità)](../../build/reference/zc-conformance.md)