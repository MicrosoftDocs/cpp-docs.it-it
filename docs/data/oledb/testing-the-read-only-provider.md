---
description: 'Altre informazioni su: test del provider di Read-Only'
title: Test di un provider in sola lettura
ms.date: 11/04/2016
helpviewer_keywords:
- testing, OLE DB providers
- testing providers
- OLE DB providers, calling
- OLE DB providers, testing
ms.assetid: e4aa30c1-391b-41f8-ac73-5270e46fd712
ms.openlocfilehash: 2fbe0e7fb67b83cae65848939fa63bce42dab173
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97272695"
---
# <a name="testing-the-read-only-provider"></a>Test di un provider in sola lettura

Per testare un provider, è necessario un consumer. Consente di fare in modo che il consumer corrisponda al provider. I modelli consumer OLE DB sono un wrapper sottile intorno OLE DB e corrispondono agli oggetti COM del provider. Poiché l'origine viene fornita con i modelli consumer, è facile eseguirne il debug con un provider. I modelli consumer sono anche un modo molto piccolo e rapido per sviluppare applicazioni consumer.

Nell'esempio riportato in questo argomento viene creata un'applicazione della creazione guidata applicazione MFC predefinita per un consumer di test. L'applicazione di test è una semplice finestra di dialogo con OLE DB codice del modello consumer aggiunto.

## <a name="to-create-the-test-application"></a>Per creare l'applicazione di test

1. Scegliere **Nuovo** dal menu **File**, quindi fare clic su **Progetto**.

1. Nel riquadro **Tipi progetto** selezionare la   >  cartella **Visual C++**  >  **MFC/ATL** installata. Nel riquadro **modelli** selezionare **applicazione MFC**.

1. Per il nome del progetto, immettere *TestProv*, quindi fare clic su **OK**.

   Verrà visualizzata la creazione guidata **applicazione MFC** .

1. Nella pagina **tipo di applicazione** selezionare **basata su finestra di dialogo**.

1. Nella pagina **funzionalità avanzate** selezionare **automazione** e quindi fare clic su **fine**.

> [!NOTE]
> L'applicazione non richiede il supporto dell'automazione se si aggiunge `CoInitialize` in `CTestProvApp::InitInstance` .

È possibile visualizzare e modificare la finestra di dialogo **TestProv** (IDD_TESTPROV_DIALOG) selezionandolo nel **visualizzazione risorse**. Inserire due caselle di riepilogo, una per ogni stringa nel set di righe, nella finestra di dialogo. Disattivare la proprietà Sort per entrambe le caselle di riepilogo premendo **ALT** + **invio** quando si seleziona una casella di riepilogo e impostando la proprietà **Sort** su **false**. Inserire anche un pulsante **Esegui** nella finestra di dialogo per recuperare il file. Per la finestra di dialogo **TestProv** completata sono presenti due caselle di riepilogo con etichetta "stringa 1" e "stringa 2", rispettivamente. sono inoltre disponibili pulsanti **OK**, **Annulla** ed **Esegui** .

Aprire il file di intestazione per la classe dialog (in questo caso TestProvDlg. h). Aggiungere il codice seguente al file di intestazione (all'esterno di qualsiasi dichiarazione di classe):

```cpp
////////////////////////////////////////////////////////////////////////
// TestProvDlg.h
#include <atldbcli.h>  

class CProvider
{
// Attributes
public:
   char   szField1[16];
   char   szField2[16];

   // Binding Maps
BEGIN_COLUMN_MAP(CProvider)
   COLUMN_ENTRY(1, szField1)
   COLUMN_ENTRY(2, szField2)
END_COLUMN_MAP()
};
```

Il codice rappresenta un record utente che definisce le colonne che saranno presenti nel set di righe. Quando il client chiama `IAccessor::CreateAccessor` , usa queste voci per specificare le colonne da associare. I modelli consumer OLE DB consentono inoltre di associare le colonne in modo dinamico. Le macro COLUMN_ENTRY sono la versione lato client delle macro PROVIDER_COLUMN_ENTRY. Le due macro COLUMN_ENTRY specificano il numero ordinale, il tipo, la lunghezza e il membro dati per le due stringhe.

Aggiungere una funzione gestore per il pulsante **Esegui** premendo **CTRL** e facendo doppio clic sul pulsante **Esegui** . Inserire il codice seguente nella funzione:

```cpp
///////////////////////////////////////////////////////////////////////
// TestProvDlg.cpp

void CTestProvDlg::OnRun()
{
   CCommand<CAccessor<CProvider>> table;
   CDataSource source;
   CSession session;

   if (source.Open("Custom.Custom.1", NULL) != S_OK)
      return;

   if (session.Open(source) != S_OK)
      return;

   if (table.Open(session, _T("c:\\samples\\myprov\\myData.txt")) != S_OK)
      return;

   while (table.MoveNext() == S_OK)
   {
      m_ctlString1.AddString(table.szField1);
      m_ctlString2.AddString(table.szField2);
   }
}
```

Le `CCommand` `CDataSource` classi, e `CSession` appartengono tutti ai modelli consumer OLE DB. Ogni classe simula un oggetto COM nel provider. L' `CCommand` oggetto accetta la `CProvider` classe, dichiarata nel file di intestazione, come parametro di modello. Il `CProvider` parametro rappresenta le associazioni utilizzate per accedere ai dati dal provider.

Le linee per aprire ogni classe creano ogni oggetto COM nel provider. Per individuare il provider, utilizzare il `ProgID` del provider. È possibile ottenere `ProgID` dal registro di sistema o cercando nel file con estensione rgs personalizzato (aprire la directory del provider e cercare la `ProgID` chiave).

Il file di MyData.txt è incluso nell' `MyProv` esempio. Per creare un file personalizzato, usare un editor e digitare un numero pari di stringhe, premendo **invio** tra ogni stringa. Se si sposta il file, modificare il nome del percorso.

Passare la stringa "c: \\ \Samples \\ \myprov \\\MyData.txt" nella `table.Open` riga. Se si esegue l'istruzione nella `Open` chiamata, si noterà che questa stringa viene passata al `SetCommandText` metodo nel provider. Si noti che il `ICommandText::Execute` Metodo usava tale stringa.

Per recuperare i dati, chiamare `MoveNext` sulla tabella. `MoveNext` chiama le `IRowset::GetNextRows` `GetRowCount` funzioni, e `GetData` . Quando non sono presenti più righe, ovvero la posizione corrente nel set di righe è maggiore di `GetRowCount` , il ciclo termina.

Quando non sono presenti più righe, i provider restituiscono DB_S_ENDOFROWSET. Il valore DB_S_ENDOFROWSET non è un errore. È sempre consigliabile controllare S_OK per annullare un ciclo di recupero dei dati e non usare la macro SUCCEEDed.

A questo punto dovrebbe essere possibile compilare e testare il programma.

## <a name="see-also"></a>Vedi anche

[Miglioramento del provider di Read-Only semplice](../../data/oledb/enhancing-the-simple-read-only-provider.md)
