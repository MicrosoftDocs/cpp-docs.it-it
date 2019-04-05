---
title: Test di un provider in sola lettura
ms.date: 11/04/2016
helpviewer_keywords:
- testing, OLE DB providers
- testing providers
- OLE DB providers, calling
- OLE DB providers, testing
ms.assetid: e4aa30c1-391b-41f8-ac73-5270e46fd712
ms.openlocfilehash: a9601b2afe40133a5cc88589b530b5ed549ac81e
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59025130"
---
# <a name="testing-the-read-only-provider"></a>Test di un provider in sola lettura

Per testare un provider, è necessario un consumer. È utile se il consumer può corrispondere a con il provider. I modelli consumer OLE DB sono un wrapper sottile per OLE DB e corrispondono con oggetti COM del provider. Poiché l'origine viene fornito con i modelli consumer, è possibile eseguire il debug di un provider con essi. I modelli consumer sono anche un modo molto piccolo e veloce per sviluppare le applicazioni consumer.

L'esempio in questo argomento crea un'applicazione di creazione guidata applicazione MFC predefinita per un utente di test. L'applicazione di test è una finestra semplice con il codice del modello consumer OLE DB aggiunto.

## <a name="to-create-the-test-application"></a>Per creare l'applicazione di test

1. Scegliere **Nuovo** dal menu **File**, quindi fare clic su **Progetto**.

1. Nel **tipi di progetto** riquadro, selezionare la **installati** > **Visual C++** > **MFC/ATL** cartella. Nel **modelli** riquadro, selezionare **applicazione MFC**.

1. Nome del progetto, immettere *TestProv*, quindi fare clic su **OK**.

   Il **applicazione MFC** procedura guidata viene visualizzata.

1. Nel **tipo di applicazione** pagina, selezionare **basato su finestra di dialogo**.

1. Nel **funzionalità avanzate** pagina, selezionare **automazione**, quindi fare clic su **fine**.

> [!NOTE]
> L'applicazione non richiede il supporto di automazione se si aggiungono `CoInitialize` in `CTestProvApp::InitInstance`.

È possibile visualizzare e modificare il **TestProv** finestra di dialogo (IDD_TESTPROV_DIALOG) selezionandolo nel **visualizzazione risorse**. Nella finestra di dialogo, inserire due caselle di riepilogo, una per ogni stringa del set di righe. Disattivare la proprietà di ordinamento per entrambe caselle di riepilogo facendo clic **Alt**+**invio** quando è selezionata una casella di riepilogo, impostazione e la **ordinamento** proprietà **False**. Inoltre, inserire un **eseguire** pulsante sulla finestra di dialogo per recuperare il file. Il termine **TestProv** finestra di dialogo deve avere due caselle di riepilogo, denominate rispettivamente "String 1" e "String 2,"; include inoltre **OK**, **Annulla**, e **eseguire**  pulsanti.

Aprire il file di intestazione per la classe di finestra di dialogo (in questo caso TestProvDlg). Aggiungere il codice seguente al file di intestazione (di fuori di qualsiasi dichiarazione di classe):

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

Il codice rappresenta un record utente che definisce quali colonne saranno nel set di righe. Quando il client chiama `IAccessor::CreateAccessor`, Usa queste voci per specificare le colonne da associare. I modelli consumer OLE DB consentono anche di associare le colonne in modo dinamico. Le macro COLUMN_ENTRY rappresentano la versione lato client delle macro PROVIDER_COLUMN_ENTRY. Le due macro COLUMN_ENTRY specificano il numero ordinale, un membro di tipo, lunghezza e i dati per le due stringhe.

Aggiungere una funzione del gestore per il **eseguiti** pulsante premendo **Ctrl** e fare doppio clic il **eseguire** pulsante. Inserire il codice seguente nella funzione:

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

Il `CCommand`, `CDataSource`, e `CSession` classi tutte appartengono ai modelli consumer OLE DB. Ogni classe corrisponde a un oggetto COM nel provider. Il `CCommand` oggetto accetta il `CProvider` (classe), dichiarati nel file di intestazione, come parametro di modello. Il `CProvider` parametro rappresenta le associazioni che usano per accedere ai dati dal provider. 

Le righe per ciascuna delle classi aprire creano ciascun oggetto COM nel provider. Per individuare il provider, usare il `ProgID` del provider. È possibile ottenere il `ProgID` dal Registro di sistema o la ricerca nel file Custom.rgs (passare alla directory del provider e cercare il `ProgID` key).

Il file mydata. txt viene incluso con il `MyProv` esempio. Per creare un file di uso personale, un editor e immettere un numero pari di stringhe, premendo **invio** tra ogni stringa. Se si sposta il file, specificare il nome del percorso.

Passare la stringa "c:\\\Samples.\\\myprov\\\MyData.txt" nel `table.Open` riga. Se si esegue la `Open` chiamata, noterete che questa stringa viene passata al `SetCommandText` (metodo) nel provider. Si noti che il `ICommandText::Execute` metodo usato tale stringa.

Per recuperare i dati, chiamare `MoveNext` sulla tabella. `MoveNext` chiama il `IRowset::GetNextRows`, `GetRowCount`, e `GetData` funzioni. Quando non sono presenti più righe (vale a dire la posizione corrente nel set di righe è supera a `GetRowCount`), il ciclo termina.

Se non sono presenti altre righe, i provider restituiscono DB_S_ENDOFROWSET. Il valore di DB_S_ENDOFROWSET. inoltre non è un errore. È sempre consigliabile verificare con S_OK per annullare un ciclo di recupero di dati e non usare la macro SUCCEEDED.

È ora possibile compilare e testare il programma.

## <a name="see-also"></a>Vedere anche

[Miglioramento di un provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md)