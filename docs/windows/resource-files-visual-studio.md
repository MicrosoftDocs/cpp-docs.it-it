---
title: File di risorse (C++)
ms.date: 02/14/2019
f1_keywords:
- vc.editors.resource
helpviewer_keywords:
- resources [C++]
- .rc files [C++]
- resource files [C++]
- resource script files [C++]
- resource script files [C++], Win-32 based applications
- resource script files [C++], files updated when editing resources
- resources [C++], types of resource files
- rct files [C++]
- rc files [C++]
- resource files [C++], types of
- .rct files [C++]
- resource script files [C++], unsupported types
- manifest resources [C++]
- resources [C++], manifest
- resources [C++], opening
- file types [C++], for resources
- resources [C++], editing
- files [C++], editable types
- resource editing
ms.assetid: 4d2b6fcc-07cf-4289-be87-83a60f69533c
ms.openlocfilehash: 45db6d0139cfa3aa8a2eaa8fe6d18158cb6646ce
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62387916"
---
# <a name="resource-files-c"></a>File di risorse (C++)

> [!NOTE]
> Dal momento che i progetti gestiti non usano i file di script della risorsa, è necessario aprire le risorse da **Esplora soluzioni**. Usare la [editor di immagini](../windows/image-editor-for-icons.md) e il [editor binario](binary-editor.md) per lavorare con i file di risorse nei progetti gestiti.
>
> Per modificare le risorse gestite è necessario che siano collegate. Negli editor di risorse di Visual Studio non è supportata la modifica di risorse incorporate.

Il termine *file di risorse* possono fare riferimento a un numero di tipi di file, ad esempio:

- File script di risorse (con estensione rc) di un programma.

- File modello di risorse (con estensione rct)

- Una singola risorsa esistente come file autonomo. Questo tipo include un file bitmap, icona o cursore che fanno riferimento a un file RC.

- Un file di intestazione generato dall'ambiente di sviluppo. Questo tipo rientrano `Resource.h`, questa operazione è definita da un file RC.

Trovare le risorse in altri tipi di file, ad esempio .exe,. dll e RES sono dette *risorse*.

È possibile rivolgersi *file di risorse* e *risorse* all'interno del progetto. È anche possibile lavorare con quelli che non fanno parte del progetto corrente o sono stati creati all'esterno dell'ambiente di sviluppo di Visual Studio. Ad esempio, è possibile eseguire queste operazioni:

- Usare file di risorse annidati e inclusi in modo condizionale.

- Aggiornare le risorse esistenti o convertirle in Visual C++.

- Importare o esportare risorse grafiche nel o dal file di risorse corrente.

- Includere identificatori (simboli) condivisi o di sola lettura che non è possibile modificare tramite l'ambiente di sviluppo.

- Includere le risorse nel file eseguibile (.exe) che non è necessario modificare o non deve essere modificato, ad esempio le risorse condivise tra più progetti.

- Includere tipi di risorse non supportati dall'ambiente di sviluppo.

Per altre informazioni sulle risorse, vedere come [creare le risorse](../windows/how-to-create-a-resource-script-file.md), [gestire le risorse](../windows/how-to-copy-resources.md), e [includono risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md).

## <a name="editable-resources"></a>Risorse modificabili

I seguenti tipi di file possono essere aperto per modificare le risorse che contengono:

| Nome file | Descrizione |
|---|---|
| RC | File script di risorsa |
| RCT | File modello di risorse |
| RES | File di risorse |
| .resx | File di risorse gestite |
| EXE | File eseguibili |
| DLL | File di libreria a collegamento dinamico |
| .bmp, .ico, .dib, .cur | File bitmap, icona, barra degli strumenti e cursore |

Quando si modificano le risorse, l'ambiente di Visual Studio funziona con e interessa i file seguenti:

| Nome file | Descrizione |
|---|---|
| Resource.h | File di intestazione generato dall'ambiente di sviluppo che contiene le definizioni dei simboli.<br/><br/>Questo file può essere incluso nel controllo del codice sorgente. |
| Nomefile.aps | Versione binaria del file di script di risorsa corrente utilizzato per il caricamento rapido.<br /><br /> Editor di risorse non leggono direttamente i file con estensione RC o Resource. h. Il compilatore di risorse li compila in file APS utilizzate dagli editor di risorse. Questo file è presente in una fase di compilazione e archivia solo dati simbolici.<br/><br/>Come con un normale processo di compilazione, le informazioni che non sono simboliche, ad esempio commenti, vengono eliminate durante il processo di compilazione.<br/><br/>Ogni volta che il file APS non risulta sincronizzato con il file RC, il file RC viene rigenerato. Ad esempio, quando si **salvare**, l'editor di risorse sovrascrive il file RC e il file Resource h. Tutte le modifiche alle risorse rimangono integrate nel file RC, ma i commenti andranno sempre persi quando il file RC viene sovrascritto. Per informazioni su come mantenere i commenti, vedere [includere le risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md).<br/><br/>È in genere, non deve includere il file APS nel controllo del codice sorgente. |
| RC | File di script di risorsa che contiene lo script per le risorse nel progetto corrente. Questo file viene sovrascritto dal file APS ogni volta che si salva.<br/><br/>Questo file può essere incluso nel controllo del codice sorgente. |

## <a name="manifest-resources"></a>Risorse di manifesto

Nei progetti desktop C++, le risorse di manifesto sono file XML che descrivono le dipendenze di che un'applicazione utilizza. Ad esempio, in Visual Studio questo MFC file manifesto generato dalla procedura guidata definisce quale versione della DLL dei controlli comuni di Windows deve usare l'applicazione:

```xml
<description>Your app description here</description>
<dependency>
    <dependentAssembly>
        <assemblyIdentity
            type="win32"
            name="Microsoft.Windows.Common-Controls"
            version="6.0.0.0"
            processorArchitecture="X86"
            publicKeyToken="6595b64144ccf1df"
            language="*"
        />
    </dependentAssembly>
</dependency>
```

Per un'applicazione di Windows XP o Windows Vista, la risorsa del manifesto deve specificare la versione più recente dei controlli comuni di Windows per l'applicazione da usare. Nell'esempio precedente Usa una versione `6.0.0.0`, che supporta il [controllo Syslink](/windows/desktop/Controls/syslink-overview).

> [!NOTE]
> È possibile avere solo una risorsa di manifesto per modulo.

Per visualizzare la versione e digitare le informazioni contenute in una risorsa di manifesto, aprire il file in un visualizzatore XML o l'editor di testo di Visual Studio. Se si apre una risorsa di manifesto da [Visualizzazione risorse](../windows/resource-view-window.md), la risorsa verrà aperta in formato binario.

### <a name="to-open-a-manifest-resource"></a>Per aprire una risorsa di manifesto

1. Aprire il progetto in Visual Studio e passare a **Esplora soluzioni**.

1. Espandere la **file di risorse** cartella, quindi:

   - Per aprire nell'editor di testo, fare doppio clic il *manifest* file.

   - Per aprire in un altro editor, fare doppio clic il *manifest* del file e selezionare **Apri con**. Specificare l'editor da utilizzare e selezionare **aperto**.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Uso di file di risorse](../windows/working-with-resource-files.md)<br/>
[Identificatori di risorsa (simboli)](../windows/symbols-resource-identifiers.md)<br/>
[Editor di risorse](../windows/resource-editors.md)<br/>