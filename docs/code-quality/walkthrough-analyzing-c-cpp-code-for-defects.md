---
title: 'Procedura dettagliata: analisi del codiceC++ C/per i difetti'
ms.date: 11/04/2016
ms.topic: conceptual
helpviewer_keywords:
- C/C++, code analysis
- code analysis, walkthroughs
- code, analyzing C/C++
- code analysis tool, walkthroughs
ms.openlocfilehash: 5fbdf9e223b3c1e1b8664de2018381958c458f45
ms.sourcegitcommit: 7bea0420d0e476287641edeb33a9d5689a98cb98
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/17/2020
ms.locfileid: "77418655"
---
# <a name="walkthrough-analyzing-cc-code-for-defects"></a>Procedura dettagliata: analisi del codiceC++ C/per i difetti

Questa procedura dettagliata illustra come analizzare C/C++ codice per i potenziali difetti del codice usando lo strumento di analisi del codiceC++ per C/code.

- Eseguire l'analisi del codice sul codice nativo.
- Analizza gli avvisi di errore del codice.
- Considera l'avviso come un errore.
- Annotare il codice sorgente per migliorare l'analisi del difetto del codice.

## <a name="prerequisites"></a>Prerequisites

- Una copia dell' [esempio di demo](../code-quality/demo-sample.md).
- Conoscenza di base di CC++/.

### <a name="to-run-code-defect-analysis-on-native-code"></a>Per eseguire l'analisi del difetto del codice sul codice nativo

1. Aprire la soluzione demo in Visual Studio.

     La soluzione Demo ora popola **Esplora soluzioni**.

1. Nel menu **Compila** fare clic su **Ricompila soluzione**.

     La soluzione viene compilata senza errori o avvisi.

1. In **Esplora soluzioni**selezionare il progetto codedifettos.

1. Scegliere **Proprietà** dal menu **Progetto**.

     Verrà visualizzata la finestra di dialogo **pagine delle proprietà Codedifettos** .

1. Fare clic su **Analisi codice**.

1. Fare clic sulla casella di controllo **Abilita analisiC++ codice per la compilazione C/on** .

1. Ricompilare il progetto codedifettos.

     Gli avvisi di analisi del codice vengono visualizzati nel **Elenco errori**.

### <a name="to-analyze-code-defect-warnings"></a>Per analizzare gli avvisi di errore del codice

1. Scegliere **Elenco errori** dal menu **Visualizza**.

     A seconda del profilo dello sviluppatore scelto in Visual Studio, potrebbe essere necessario puntare ad **altre finestre** dal menu **Visualizza** , quindi fare clic su **Elenco errori**.

1. Nella **Elenco errori**fare doppio clic sull'avviso seguente:

     avviso C6230: cast implicito tra tipi semanticamente diversi: utilizzo di HRESULT in un contesto booleano.

     Nell'editor di codice viene visualizzata la riga che ha provocato l'avviso nella funzione `bool ProcessDomain()`. Questo avviso indica che è in uso un `HRESULT` in un'istruzione ' If ' in cui è previsto un risultato booleano.  Si tratta in genere di un errore perché quando il `S_OK` HRESULT viene restituito dalla funzione it indica l'esito positivo, ma quando viene convertito in un valore booleano restituisce `false`.

1. Correggere questo avviso utilizzando la macro `SUCCEEDED`, che converte in `true` quando un valore restituito `HRESULT` indica l'esito positivo. Il codice dovrebbe essere simile al codice seguente:

   ```cpp
   if (SUCCEEDED (ReadUserAccount()) )
   ```

1. Nella **Elenco errori**fare doppio clic sull'avviso seguente:

     avviso C6282: operatore errato: assegnazione alla costante nel contesto di test. Is = = designato?

1. Correggere questo avviso verificando l'uguaglianza. Il codice dovrebbe essere simile al codice seguente:

   ```cpp
   if ((len == ACCOUNT_DOMAIN_LEN) || (g_userAccount[len] != '\\'))
   ```

### <a name="to-treat-warning-as-an-error"></a>Per considerare l'avviso come un errore

1. Nel file bug. cpp aggiungere l'istruzione `#pragma` seguente all'inizio del file per considerare il C6001 di avviso come errore:

   ```cpp
   #pragma warning (error: 6001)
   ```

1. Ricompilare il progetto codedifettos.

     Nel **Elenco errori**, C6001 viene visualizzato come un errore.

1. Correggere i due errori C6001 rimanenti nella **Elenco errori** inizializzando `i` e `j` su 0.

1. Ricompilare il progetto codedifettos.

     Il progetto viene compilato senza avvisi o errori.

### <a name="to-correct-the-source-code-annotation-warnings-in-annotationc"></a>Per correggere gli avvisi di annotazione del codice sorgente nell'annotazione. c

1. In Esplora soluzioni selezionare il progetto annotazioni.

1. Scegliere **Proprietà** dal menu **Progetto**.

     Verrà visualizzata la finestra di dialogo **pagine delle proprietà delle annotazioni** .

1. Fare clic su **Analisi codice**.

1. Selezionare la casella di controllo **Abilita analisi codiceC++ per la compilazione C/on** .

1. Ricompilare il progetto delle annotazioni.

1. Nella **Elenco errori**fare doppio clic sull'avviso seguente:

     avviso C6011: dereferenziazione del puntatore NULL ' newNode '.

     Questo avviso indica un errore del chiamante per verificare il valore restituito. In questo caso, una chiamata a **AllocateNode** potrebbe restituire un valore null (vedere il file di intestazione Annotations. h per la dichiarazione di funzione per AllocateNode).

1. Aprire il file Annotations. cpp.

1. Per correggere il problema, utilizzare un'istruzione ' If ' per testare il valore restituito. Il codice dovrebbe essere simile al codice seguente:

   ```cpp
   if (nullptr != newNode)
   {
       newNode->data = value;
       newNode->next = 0;
       node->next = newNode;
   }
   ```

1. Ricompilare il progetto delle annotazioni.

     Il progetto viene compilato senza avvisi o errori.

### <a name="to-use-source-code-annotation"></a>Per utilizzare l'annotazione del codice sorgente

1. Annotare i parametri formali e il valore restituito della funzione `AddTail` per indicare che i valori del puntatore possono essere null:

   ```cpp
   _Ret_maybenull_ LinkedList* AddTail(_Maybenull_ LinkedList* node, int value)
   ```

1. Ricompilare il progetto delle annotazioni.

1. Nella **Elenco errori**fare doppio clic sull'avviso seguente:

     avviso C6011: dereferenziazione del puntatore NULL ' node '.

     Questo avviso indica che il nodo passato nella funzione potrebbe essere null e indica il numero di riga in cui è stato generato l'avviso.

1. Per correggere il problema, utilizzare un'istruzione ' If ' all'inizio della funzione per testare il valore passato. Il codice dovrebbe essere simile al codice seguente:

   ```cpp
   if (nullptr == node)
   {
        return nullptr;
   }
   ```

1. Ricompilare il progetto delle annotazioni.

     Il progetto viene ora compilato senza avvisi o errori.

## <a name="see-also"></a>Vedere anche

[Procedura dettagliata: analisi del codice gestito per i difetti del codice](/visualstudio/code-quality/walkthrough-analyzing-managed-code-for-code-defects)\
[Analisi del codice per C/C++](../code-quality/code-analysis-for-c-cpp-overview.md)
