---
title: 'Main: Avvio del programma'
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
ms.openlocfilehash: 358ae8ec88281bab741393b1196ee2a1e615e896
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64345044"
---
# <a name="main-program-startup"></a>Main: Avvio del programma

Una speciale funzione denominata **principale** è il punto iniziale di esecuzione per tutti i programmi C e C++. Se si sta scrivendo codice che è conforme al modello di programmazione Unicode, è possibile usare `wmain`, ovvero la versione a caratteri wide di **principale**.

Il **principale** funzione non è predefinita dal compilatore. Deve essere fornita nel testo di programma.

La sintassi di dichiarazione per **principale** è

```cpp
int main();
```

o, facoltativamente,

```cpp
int main(int argc, char *argv[], char *envp[]);
```

## <a name="microsoft-specific"></a>Sezione specifica Microsoft

La sintassi di dichiarazione per `wmain` è la seguente:

```cpp
int wmain( );
```

o, facoltativamente,

```cpp
int wmain(int argc, wchar_t *argv[], wchar_t *envp[]);
```

È anche possibile usare `_tmain`, definito in Tchar. h. `_tmain` si risolve in **principale** a meno che non è definito Unicode. In tal caso, `_tmain` si risolve in `wmain`.

In alternativa, il **principale** e `wmain` funzioni possono essere dichiarate come elementi che restituiscono **void** (nessun valore restituito). Se si dichiara **principale** oppure `wmain` prevede la restituzione **void**, è possibile restituire un codice di uscita al processo padre o al sistema operativo usando un [restituiscono](../cpp/return-statement-in-program-termination-cpp.md) istruzione. Per restituire una codice di uscita quando **principale** oppure `wmain` viene dichiarato come **void**, è necessario usare il [uscire](../cpp/exit-function.md) (funzione).

**Fine sezione specifica Microsoft**

I tipi per `argc` e `argv` sono definiti dal linguaggio. I nomi `argc`, `argv` e `envp` sono tradizionali, ma non sono richiesti dal compilatore. Per altre informazioni e un esempio, vedere [definizioni di argomenti](../cpp/argument-definitions.md).

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Uso di wmain anziché di main](../cpp/using-wmain-instead-of-main.md)<br/>
[Limitazioni della funzione main](../cpp/main-function-restrictions.md)<br/>
[Analisi di argomenti della riga di comando C++](../cpp/parsing-cpp-command-line-arguments.md)
