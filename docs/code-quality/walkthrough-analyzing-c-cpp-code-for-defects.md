---
title: 'Procedura dettagliata: analisi del codice C/C'
description: Viene illustrato come utilizzare l'analisi del codice con Microsoft C .
ms.date: 04/14/2020
ms.topic: conceptual
helpviewer_keywords:
- C/C++, code analysis
- code analysis, walkthroughs
- code, analyzing C/C++
- code analysis tool, walkthroughs
ms.openlocfilehash: fe9b3775199b2a18cf940b99e87852350f1fbea9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370208"
---
# <a name="walkthrough-analyzing-cc-code-for-defects"></a>Procedura dettagliata: analisi del codice C/C

In questa procedura dettagliata viene illustrato come analizzare il codice C/Cè per potenziali difetti del codice. Vengono utilizzati gli strumenti di analisi del codice per il codice C/C.

In questa procedura dettagliata:

- Eseguire l'analisi del codice sul codice nativo.
- Analizzare gli avvisi relativi ai difetti del codice.
- Considerare l'avviso come un errore.
- Annotare il codice sorgente per migliorare l'analisi dei difetti del codice.

## <a name="prerequisites"></a>Prerequisiti

- Una copia [dell'esempio CppDemo](../code-quality/demo-sample.md).
- Comprensione di base di C/C.

## <a name="run-code-analysis-on-native-code"></a>Eseguire l'analisi del codice sul codice nativoRun code analysis on native code

### <a name="to-run-code-defect-analysis-on-native-code"></a>Per eseguire l'analisi dei difetti del codice nel codice nativoTo run code defect analysis on native code

::: moniker range=">=vs-2019"

1. Aprire la soluzione CppDemo in Visual Studio.Open the CppDemo solution in Visual Studio.

     La soluzione CppDemo ora popola **Esplora Risorse della soluzione.**

1. Scegliere **Ricompila soluzione**dal menu **Compila** .

     La soluzione viene compilata senza errori o avvisi.

1. In **Esplora soluzioni**selezionare il progetto CodeDefects.In Solution Explorer , select the CodeDefects project.

1. Scegliere **Proprietà**dal menu **Progetto** .

     Verrà visualizzata la finestra di dialogo **Pagine delle proprietà CodeDefects** .

1. Selezionare la pagina delle proprietà **Analisi codice.**

1. Impostare la proprietà **Abilita analisi codice in compilazione su** **Sì**. Scegliere **OK** per salvare le modifiche.

1. Ricompilare il progetto CodeDefects.

     Gli avvisi dell'analisi del codice vengono visualizzati nella finestra **Elenco errori.**

::: moniker-end

::: moniker range="<=vs-2017"

1. Aprire la soluzione CppDemo in Visual Studio.Open the CppDemo solution in Visual Studio.

     La soluzione CppDemo ora popola **Esplora Risorse della soluzione.**

1. Scegliere **Ricompila soluzione**dal menu **Compila** .

     La soluzione viene compilata senza errori o avvisi.

     > [!NOTE]
     > In Visual Studio 2017, è possibile che `E1097 unknown attribute "no_init_all"` venga visualizzato un avviso spurio nel motore IntelliSense.In Visual Studio 2017, you may see a spurious warning in the IntelliSense engine. È possibile ignorare questo avviso.

1. In **Esplora soluzioni**selezionare il progetto CodeDefects.In Solution Explorer , select the CodeDefects project.

1. Scegliere **Proprietà**dal menu **Progetto** .

     Verrà visualizzata la finestra di dialogo **Pagine delle proprietà CodeDefects** .

1. Selezionare la pagina delle proprietà **Analisi codice.**

1. Selezionare la casella di controllo **Abilita analisi codice durante la compilazione.** Scegliere **OK** per salvare le modifiche.

1. Ricompilare il progetto CodeDefects.

     Gli avvisi dell'analisi del codice vengono visualizzati nella finestra **Elenco errori.**

::: moniker-end

### <a name="to-analyze-code-defect-warnings"></a>Per analizzare gli avvisi relativi ai difetti del codice

1. Scegliere **Elenco errori**dal menu **Visualizza** .

     Questa voce di menu potrebbe non essere visibile. Dipende dal profilo di sviluppatore scelto in Visual Studio. Potrebbe essere necessario scegliere **Altre finestre** dal menu **Visualizza** e quindi scegliere **Elenco errori**.

1. Nella finestra **Elenco errori** fare doppio clic sul seguente avviso:

     C6230: cast implicito tra tipi semanticamente diversi: utilizzo di HRESULT in un contesto booleano.

     Nell'editor di codice viene visualizzata `bool ProcessDomain()`la riga che ha causato l'avviso all'interno della funzione . Questo avviso indica `HRESULT` che un oggetto viene utilizzato in un'istruzione 'if' in cui è previsto un risultato booleano. In genere si tratta di `S_OK` un errore, perché quando il valore HRESULT viene restituito da una `false`funzione indica l'esito positivo, ma quando viene convertito in un valore booleano viene restituito a .

1. Correggere l'avviso `SUCCEEDED` utilizzando la macro, `true` che `HRESULT` viene convertita quando un valore restituito indica l'esito positivo. Il codice dovrebbe essere simile al codice seguente:Your code should resemble the following code:

   ```cpp
   if (SUCCEEDED(ReadUserAccount()))
   ```

1. **Nell'Elenco errori**fare doppio clic sul seguente avviso:

     C6282: operatore non corretto: assegnazione della costante nel contesto booleano. Prendi invece la possibilità di utilizzare il tipo '

1. Correggere l'avviso verificando l'uguaglianza. Il codice dovrebbe essere simile al codice seguente:Your code should look similar to the following code:

   ```cpp
   if ((len == ACCOUNT_DOMAIN_LEN) || (g_userAccount[len] != L'\\'))
   ```

1. Correggere gli avvisi C6001 rimanenti nell'Elenco **errori** inizializzando `i` e `j` su 0.

1. Ricompilare il progetto CodeDefects.

     Il progetto viene compilato senza avvisi o errori.

## <a name="correct-source-code-annotation-warnings"></a>Correggere gli avvisi di annotazione del codice sorgente

### <a name="to-enable-the-source-code-annotation-warnings-in-annotationc"></a>Per abilitare gli avvisi di annotazione del codice sorgente in annotation.cTo enable the source code annotation warnings in annotation.c

::: moniker range=">=vs-2019"

1. In Esplora soluzioni selezionare il progetto Annotazioni.In Solution Explorer, select the Annotations project.

1. Scegliere **Proprietà**dal menu **Progetto** .

     Verrà visualizzata la finestra di dialogo **Pagine delle proprietà delle annotazioni.**

1. Selezionare la pagina delle proprietà **Analisi codice.**

1. Impostare la proprietà **Abilita analisi codice in compilazione su** **Sì**. Scegliere **OK** per salvare le modifiche.

::: moniker-end

::: moniker range="<=vs-2017"

1. In Esplora soluzioni selezionare il progetto Annotazioni.In Solution Explorer, select the Annotations project.

1. Scegliere **Proprietà**dal menu **Progetto** .

     Verrà visualizzata la finestra di dialogo **Pagine delle proprietà delle annotazioni.**

1. Selezionare la pagina delle proprietà **Analisi codice.**

1. Selezionare la casella di controllo **Abilita analisi codice durante la compilazione.** Scegliere **OK** per salvare le modifiche.

::: moniker-end

### <a name="to-correct-the-source-code-annotation-warnings-in-annotationc"></a>Per correggere gli avvisi di annotazione del codice sorgente in annotation.cTo correct the source code annotation warnings in annotation.c

1. Ricompilare il progetto Annotazioni.

1. Scegliere **Esegui** analisi **codice sulle annotazioni**dal menu Compila .

1. **Nell'Elenco errori**fare doppio clic sul seguente avviso:

     C6011: Dereferetramento del puntatore NULL 'newNode'.

     Questo avviso indica che il chiamante non è in grado di controllare il valore restituito. In questo caso, `AllocateNode` una chiamata a potrebbe restituire un valore NULL. Vedere il file di intestazione annotations.h per la dichiarazione di funzione per `AllocateNode`.

1. Il cursore si trova nella posizione nel file annotations.cpp in cui si è verificato l'avviso.

1. Per correggere l'avviso, utilizzare un'istruzione 'if' per verificare il valore restituito. Il codice dovrebbe essere simile al codice seguente:Your code should resemble the following code:

   ```cpp
   LinkedList* newNode = AllocateNode();
   if (nullptr != newNode)
   {
       newNode->data = value;
       newNode->next = 0;
       node->next = newNode;
   }
   ```

1. Ricompilare il progetto Annotazioni.

     Il progetto viene compilato senza avvisi o errori.

## <a name="use-source-code-annotation-to-discover-more-issues"></a>Usare l'annotazione del codice sorgente per individuare altri problemiUse source code annotation to discover more issues

### <a name="to-use-source-code-annotation"></a>Per utilizzare l'annotazione del codice sorgenteTo use source code annotation

1. Annotare i parametri formali `AddTail` e il valore restituito della funzione per indicare che i valori del puntatore possono essere null:

   ```cpp
   _Ret_maybenull_ LinkedList* AddTail(_Maybenull_ LinkedList* node, int value)
   ```

1. Dal menu **Genera** scegliere **Esegui analisi del codice sulla soluzione**.

1. **Nell'Elenco errori**fare doppio clic sul seguente avviso:

     C6011: Dereferetramento del puntatore NULL 'nodo'.

     Questo avviso indica che il nodo passato alla funzione potrebbe essere null.

1. Per correggere l'avviso, utilizzare un'istruzione 'if' all'inizio della funzione per verificare il valore passato. Il codice dovrebbe essere simile al codice seguente:Your code should resemble the following code:

   ```cpp
   if (nullptr == node)
   {
        return nullptr;
   }
   ```

1. Dal menu **Genera** scegliere **Esegui analisi del codice sulla soluzione**.

     Il progetto viene ora compilato senza avvisi o errori.

## <a name="see-also"></a>Vedere anche

[Procedura dettagliata: analisi del codice gestito per i difetti del codiceWalkthrough: Analyzing Managed Code for Code Defects](/visualstudio/code-quality/walkthrough-analyzing-managed-code-for-code-defects)\
[Analisi codice per C/C++](../code-quality/code-analysis-for-c-cpp-overview.md)
