---
title: 'Procedura dettagliata: analisi del codice C/C++ per i difetti'
description: Viene illustrato come usare l'analisi del codice con Microsoft C++ in Visual Studio.
ms.date: 04/14/2020
ms.topic: conceptual
helpviewer_keywords:
- C/C++, code analysis
- code analysis, walkthroughs
- code, analyzing C/C++
- code analysis tool, walkthroughs
ms.openlocfilehash: 65da18f5f6d1972276f1cb8e306e82314282e40a
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227712"
---
# <a name="walkthrough-analyzing-cc-code-for-defects"></a>Procedura dettagliata: analisi del codice C/C++ per i difetti

In questa procedura dettagliata viene illustrato come analizzare il codice C/C++ per i potenziali difetti del codice. USA gli strumenti di analisi del codice per il codice C/C++.

In questa procedura dettagliata verranno fornite le seguenti operazioni:

- Eseguire l'analisi del codice sul codice nativo.
- Analizza gli avvisi di errore del codice.
- Considera l'avviso come un errore.
- Annotare il codice sorgente per migliorare l'analisi del difetto del codice.

## <a name="prerequisites"></a>Prerequisiti

- Una copia dell' [esempio CppDemo](../code-quality/demo-sample.md).
- Conoscenza di base di C/C++.

## <a name="run-code-analysis-on-native-code"></a>Esegui analisi del codice su codice nativo

### <a name="to-run-code-defect-analysis-on-native-code"></a>Per eseguire l'analisi del difetto del codice sul codice nativo

::: moniker range=">=vs-2019"

1. Aprire la soluzione CppDemo in Visual Studio.

     La soluzione CppDemo ora popola **Esplora soluzioni**.

1. Scegliere **Ricompila soluzione**dal menu **Compila** .

     La soluzione viene compilata senza errori o avvisi.

1. In **Esplora soluzioni**selezionare il progetto codedifettos.

1. Scegliere **Proprietà**dal menu **progetto** .

     Verrà visualizzata la finestra di dialogo **pagine delle proprietà Codedifettos** .

1. Selezionare la pagina delle proprietà **analisi codice** .

1. Modificare la proprietà **Abilita analisi codice su compilazione** su **Sì**. Scegliere **OK** per salvare le modifiche.

1. Ricompilare il progetto codedifettos.

     Gli avvisi di analisi del codice vengono visualizzati nella finestra di **Elenco errori** .

::: moniker-end

::: moniker range="<=vs-2017"

1. Aprire la soluzione CppDemo in Visual Studio.

     La soluzione CppDemo ora popola **Esplora soluzioni**.

1. Scegliere **Ricompila soluzione**dal menu **Compila** .

     La soluzione viene compilata senza errori o avvisi.

     > [!NOTE]
     > In Visual Studio 2017 potrebbe essere visualizzato un avviso non corretto `E1097 unknown attribute "no_init_all"` nel motore di IntelliSense. È possibile ignorare questo avviso.

1. In **Esplora soluzioni**selezionare il progetto codedifettos.

1. Scegliere **Proprietà**dal menu **progetto** .

     Verrà visualizzata la finestra di dialogo **pagine delle proprietà Codedifettos** .

1. Selezionare la pagina delle proprietà **analisi codice** .

1. Selezionare la casella **di controllo Abilita analisi codice su compilazione** . Scegliere **OK** per salvare le modifiche.

1. Ricompilare il progetto codedifettos.

     Gli avvisi di analisi del codice vengono visualizzati nella finestra di **Elenco errori** .

::: moniker-end

### <a name="to-analyze-code-defect-warnings"></a>Per analizzare gli avvisi di errore del codice

1. Scegliere **Elenco errori**dal menu **Visualizza** .

     Questa voce di menu potrebbe non essere visibile. Dipende dal profilo dello sviluppatore scelto in Visual Studio. Potrebbe essere necessario puntare ad **altre finestre** dal menu **Visualizza** , quindi scegliere **Elenco errori**.

1. Nella finestra **Elenco errori** fare doppio clic sull'avviso seguente:

     C6230: cast implicito tra tipi semanticamente diversi: utilizzo di HRESULT in un contesto booleano.

     Nell'editor di codice viene visualizzata la riga che ha provocato l'avviso nella funzione `bool ProcessDomain()` . Questo avviso indica che `HRESULT` è in uso in un'istruzione ' If ' in cui è previsto un risultato booleano. Si tratta in genere di un errore, perché quando `S_OK` HRESULT viene restituito da una funzione indica l'esito positivo, ma quando viene convertito in un valore booleano che restituisce **`false`** .

1. Correggere questo avviso utilizzando la `SUCCEEDED` macro, che viene convertita in **`true`** quando un `HRESULT` valore restituito indica l'esito positivo. Il codice dovrebbe essere simile al codice seguente:

   ```cpp
   if (SUCCEEDED(ReadUserAccount()))
   ```

1. Nella **Elenco errori**fare doppio clic sull'avviso seguente:

     C6282: operatore errato: assegnazione di una costante in un contesto booleano. Provare a usare ' = ='.

1. Correggere questo avviso verificando l'uguaglianza. Il codice dovrebbe essere simile al codice seguente:

   ```cpp
   if ((len == ACCOUNT_DOMAIN_LEN) || (g_userAccount[len] != L'\\'))
   ```

1. Correggere gli avvisi C6001 rimanenti nella **Elenco errori** inizializzando `i` e `j` su 0.

1. Ricompilare il progetto codedifettos.

     Il progetto viene compilato senza avvisi o errori.

## <a name="correct-source-code-annotation-warnings"></a>Correggere gli avvisi di annotazione del codice sorgente

### <a name="to-enable-the-source-code-annotation-warnings-in-annotationc"></a>Per abilitare gli avvisi di annotazione del codice sorgente nell'annotazione. c

::: moniker range=">=vs-2019"

1. In Esplora soluzioni selezionare il progetto annotazioni.

1. Scegliere **Proprietà**dal menu **progetto** .

     Verrà visualizzata la finestra di dialogo **pagine delle proprietà delle annotazioni** .

1. Selezionare la pagina delle proprietà **analisi codice** .

1. Modificare la proprietà **Abilita analisi codice su compilazione** su **Sì**. Scegliere **OK** per salvare le modifiche.

::: moniker-end

::: moniker range="<=vs-2017"

1. In Esplora soluzioni selezionare il progetto annotazioni.

1. Scegliere **Proprietà**dal menu **progetto** .

     Verrà visualizzata la finestra di dialogo **pagine delle proprietà delle annotazioni** .

1. Selezionare la pagina delle proprietà **analisi codice** .

1. Selezionare la casella **di controllo Abilita analisi codice su compilazione** . Scegliere **OK** per salvare le modifiche.

::: moniker-end

### <a name="to-correct-the-source-code-annotation-warnings-in-annotationc"></a>Per correggere gli avvisi di annotazione del codice sorgente nell'annotazione. c

1. Ricompilare il progetto delle annotazioni.

1. Scegliere **Esegui analisi codice sulle annotazioni**dal menu **Compila** .

1. Nella **Elenco errori**fare doppio clic sull'avviso seguente:

     C6011: dereferenziazione del puntatore NULL ' newNode '.

     Questo avviso indica un errore del chiamante per verificare il valore restituito. In questo caso, una chiamata a `AllocateNode` può restituire un valore null. Vedere il file di intestazione Annotations. h per la dichiarazione di funzione per `AllocateNode` .

1. Il cursore si trova nella posizione del file Annotations. cpp in cui si è verificato l'avviso.

1. Per correggere il problema, utilizzare un'istruzione ' If ' per testare il valore restituito. Il codice dovrebbe essere simile al codice seguente:

   ```cpp
   LinkedList* newNode = AllocateNode();
   if (nullptr != newNode)
   {
       newNode->data = value;
       newNode->next = 0;
       node->next = newNode;
   }
   ```

1. Ricompilare il progetto delle annotazioni.

     Il progetto viene compilato senza avvisi o errori.

## <a name="use-source-code-annotation-to-discover-more-issues"></a>Usare l'annotazione del codice sorgente per individuare altri problemi

### <a name="to-use-source-code-annotation"></a>Per utilizzare l'annotazione del codice sorgente

1. Annotare i parametri formali e il valore restituito della funzione `AddTail` per indicare che i valori del puntatore possono essere null:

   ```cpp
   _Ret_maybenull_ LinkedList* AddTail(_Maybenull_ LinkedList* node, int value)
   ```

1. Dal menu **Genera** scegliere **Esegui analisi del codice sulla soluzione**.

1. Nella **Elenco errori**fare doppio clic sull'avviso seguente:

     C6011: dereferenziazione del puntatore NULL ' node '.

     Questo avviso indica che il nodo passato nella funzione potrebbe essere null.

1. Per correggere il problema, utilizzare un'istruzione ' If ' all'inizio della funzione per testare il valore passato. Il codice dovrebbe essere simile al codice seguente:

   ```cpp
   if (nullptr == node)
   {
        return nullptr;
   }
   ```

1. Dal menu **Genera** scegliere **Esegui analisi del codice sulla soluzione**.

     Il progetto viene ora compilato senza avvisi o errori.

## <a name="see-also"></a>Vedere anche

[Procedura dettagliata: analisi del codice gestito per i difetti del codice](/visualstudio/code-quality/walkthrough-analyzing-managed-code-for-code-defects)\
[Analisi codice per C/C++](../code-quality/code-analysis-for-c-cpp-overview.md)
