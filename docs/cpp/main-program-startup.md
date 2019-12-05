---
title: 'main: avvio del programma'
ms.date: 11/04/2016
f1_keywords:
- vc.main.startup
- _tmain
helpviewer_keywords:
- program startup [C++]
- entry points, program
- wmain function
- _tmain function
- startup code, main function
- main function, program startup
ms.assetid: f9581cd6-93f7-4bcd-99ec-d07c3c107dd4
ms.openlocfilehash: 29e1b77c2e36c66e4e6fc4ec30a73af4d57654a0
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74857437"
---
# <a name="main-program-startup"></a>main: avvio del programma

Una funzione speciale denominata **Main** è il punto iniziale di esecuzione per tutti i programmi C++ C e. Se si scrive codice che rispetta il modello di programmazione Unicode, è possibile usare `wmain`, ovvero la versione a caratteri wide di **Main**.

La funzione **Main** non è predefinita dal compilatore. Deve essere fornita nel testo di programma.

La sintassi di dichiarazione per **Main** è

```cpp
int main();
```

o, facoltativamente,

```cpp
int main(int argc, char *argv[], char *envp[]);
```

**Sezione specifica Microsoft**

La sintassi di dichiarazione per `wmain` è la seguente:

```cpp
int wmain( );
```

o, facoltativamente,

```cpp
int wmain(int argc, wchar_t *argv[], wchar_t *envp[]);
```

È inoltre possibile utilizzare `_tmain`, definito in TCHAR. h. `_tmain` viene risolto in **Main** , a meno che non sia stato definito _UNICODE. In tal caso, `_tmain` si risolve in `wmain`.

In alternativa, le funzioni **Main** e `wmain` possono essere dichiarate come restituendo **void** (nessun valore restituito). Se si dichiara **Main** o `wmain` come restituito **void**, non è possibile restituire un codice di uscita al processo padre o al sistema operativo usando un'istruzione [return](../cpp/return-statement-in-program-termination-cpp.md) . Per restituire un codice di uscita quando **Main** o `wmain` viene dichiarato come **void**, è necessario usare la funzione [Exit](../cpp/exit-function.md) .

**Fine sezione specifica Microsoft**

I tipi per `argc` e `argv` sono definiti dal linguaggio. I nomi `argc`, `argv` e `envp` sono tradizionali, ma non sono richiesti dal compilatore. Per ulteriori informazioni e un esempio, vedere [definizioni degli argomenti](../cpp/argument-definitions.md).

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Uso di wmain anziché di main](../cpp/using-wmain-instead-of-main.md)<br/>
[Limitazioni della funzione main](../cpp/main-function-restrictions.md)<br/>
[Analisi di argomenti della riga di comando C++](../cpp/parsing-cpp-command-line-arguments.md)
