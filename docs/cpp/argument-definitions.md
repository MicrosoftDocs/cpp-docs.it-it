---
title: Definizioni di argomenti | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- envp argument
- main function, arguments
- arguments [C++], for main function
- argv argument
- argc argument
ms.assetid: 6148cbf3-ebe8-44f2-b277-de4b723991c7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ca012d7b391e011d9658b0b74e0f4433d5dc9fd4
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="argument-definitions"></a>Definizioni di argomenti
Gli argomenti nel prototipo  
  
```  
  
int main( int argc, char* argv[], char* envp[]);
int wmain( int argc, wchar_t* argv[], wchar_t* envp[]);  
```  
  
 consentono di eseguire l'utile analisi della riga di comando di argomenti e, facoltativamente, di accedere alle variabili di ambiente. Le definizioni degli argomenti sono le seguenti:  
  
 `argc`  
 Un intero contenente il numero di argomenti che seguono in `argv`. Il parametro `argc` è sempre maggiore di o uguale a 1.  
  
 `argv`  
 Una matrice di stringhe con terminazione null che rappresentano gli argomenti della riga di comando immessi dall'utente del programma. Per convenzione, `argv` **[0]** è il comando con cui viene richiamato il programma, `argv` **[1]** è il primo argomento della riga di comando e così via, fino a `argv`  **[**`argc`**]**, che è sempre **NULL**. Vedere [personalizzazione dell'elaborazione della riga di comando](../cpp/customizing-cpp-command-line-processing.md) per informazioni sull'elaborazione della riga di comando di eliminazione.  
  
 Il primo argomento della riga di comando è sempre `argv` **[1]** e l'ultimo è `argv` **[** `argc` - 1 **]**.  
  
> [!NOTE]
>  Per convenzione, `argv`**[0]** è il comando con cui il programma viene chiamato.  Tuttavia, è possibile generare un processo utilizzando [CreateProcess](http://msdn.microsoft.com/library/windows/desktop/ms683197) e se si utilizza sia il primo e secondo argomento (`lpApplicationName` e `lpCommandLine`), `argv` **[0]** potrebbe non essere il nome del file eseguibile; Utilizzare [GetModuleFileName](http://msdn.microsoft.com/library/windows/desktop/ms683197) per recuperare il nome del file eseguibile e il relativo percorso completo.  
  
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 `envp`  
 La matrice `envp`, che è un'estensione comune in molti sistemi UNIX, viene utilizzata in Microsoft C++. È una matrice di stringhe che rappresentano le variabili impostate nell'ambiente dell'utente. Questa matrice viene terminata da un **NULL** voce. Può essere dichiarata come matrice di puntatori a **char (char** \*envp []**)** o come un puntatore a puntatori a **char (char** \* \* envp **)**. Se il programma utilizza **wmain** anziché **principale**, utilizzare il `wchar_t` del tipo di dati anziché `char`. Il blocco di ambiente passato a **principale** e **wmain** è una copia "bloccata" dell'ambiente corrente. Se successivamente si modifica l'ambiente tramite una chiamata a **putenv** o `_wputenv`, l'ambiente corrente (come restituito da `getenv` / `_wgetenv` e `_environ` /  `_wenviron` variabile) verrà modifica, ma il blocco a cui fa riferimento a envp non cambierà. Vedere [personalizzazione dell'elaborazione della riga di comando](../cpp/customizing-cpp-command-line-processing.md) per informazioni su soppressione elaborazione ambiente. Questo argomento è compatibile con ANSI in C, ma non in C++.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `argc`, `argv`, e `envp` argomenti **principale**:  
  
```  
// argument_definitions.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <string.h>  
  
using namespace std;  
int main( int argc, char *argv[], char *envp[] ) {  
    int iNumberLines = 0;    // Default is no line numbers.  
  
    // If /n is passed to the .exe, display numbered listing  
    // of environment variables.  
  
    if ( (argc == 2) && _stricmp( argv[1], "/n" ) == 0 )  
         iNumberLines = 1;  
  
    // Walk through list of strings until a NULL is encountered.  
    for( int i = 0; envp[i] != NULL; ++i ) {  
        if( iNumberLines )  
            cout << i << ": " << envp[i] << "\n";  
    }  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [main: avvio del programma](../cpp/main-program-startup.md)