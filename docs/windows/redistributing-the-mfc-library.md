---
description: 'Ulteriori informazioni su: ridistribuzione della libreria MFC'
title: Ridistribuzione della libreria MFC
ms.date: 11/04/2016
helpviewer_keywords:
- MFC, redistributing
- redistributing MFC library
ms.assetid: 72714ce1-385e-4c1c-afa5-96b03e873866
ms.openlocfilehash: 7089b7000d3a9d397291379e47da6b49c4c9da71
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97247358"
---
# <a name="redistributing-the-mfc-library"></a>Ridistribuzione della libreria MFC

Se si collega l'applicazione alla libreria MFC in modo dinamico, è necessario ridistribuire la DLL MFC corrispondente. Se ad esempio l'applicazione MFC viene compilata usando la versione di MFC fornita con Visual Studio 2015, è necessario ridistribuire mfc140.dll o mfc140u.dll, a seconda se l'app viene compilata per il supporto dei caratteri narrow o di Unicode.

> [!NOTE]
> I file mfc140.dll non sono stati inseriti nella directory dei file ridistribuibili in Visual Studio 2015 RTM. Al loro posto è possibile usare le versioni installate da Visual Studio 2015 nelle directory Windows\system32 e Windows\syswow64.

Poiché tutte le DLL MFC usano la versione condivisa della libreria di runtime C (CRT), è anche necessario ridistribuire questa libreria. La versione di MFC fornita con Visual Studio 2015 usa la libreria Universal CRT, che viene distribuita come parte di Windows 10. Per eseguire un'applicazione MFC compilata con Visual Studio 2015 in versioni precedenti di Windows, è necessario ridistribuire Universal CRT. Per informazioni su come ridistribuire Universal CRT come componente del sistema operativo o tramite distribuzione locale, vedere [Introducing the Universal CRT](https://devblogs.microsoft.com/cppblog/introducing-the-universal-crt/) (Presentazione di Universal CRT). Per scaricare la libreria Universal CRT per la distribuzione centrale nelle versioni supportate di Windows, vedere [Windows 10 Universal C Runtime](https://www.microsoft.com/download/details.aspx?id=48234). Versioni ridistribuibili specifiche dell'architettura di ucrtbase.dll per la distribuzione locale sono disponibili in Windows SDK. Per impostazione predefinita, Visual Studio le installa in una sottodirectory specifica dell'architettura in C:\Programmi (x86)\Windows Kits\10\Redist\ucrt\DLLs\.

Se l'app viene compilata tramite una versione precedente della libreria MFC, è necessario ridistribuire la DLL CRT corrispondente dalla directory dei file ridistribuibili. Se ad esempio l'applicazione MFC viene compilata tramite il set di strumenti di Visual Studio 2013 (vc120), è necessario ridistribuire msvcr120.dll. È anche necessario ridistribuire il file mfc`<version>`u.dll o mfc`<version>`.dll corrispondente.

Se si collega l'applicazione a MFC in modo statico (vale a dire, se si specifica **Usa MFC in una libreria statica** nella scheda **Generale** della finestra di dialogo **Pagine delle proprietà**), non è necessario ridistribuire una DLL MFC. Tuttavia, anche se il collegamento statico può funzionare per il testing e la distribuzione interna delle applicazioni, è consigliabile non usarlo per la ridistribuzione di MFC. Per altre informazioni sulle strategie consigliate per la distribuzione di librerie Visual C++, vedere [Scelta di un metodo di distribuzione](choosing-a-deployment-method.md).

Se l'applicazione usa le classi MFC che implementano il controllo WebBrowser (ad esempio la [classe CHtmlView](../mfc/reference/chtmlview-class.md) o la [classe CHtmlEditView](../mfc/reference/chtmleditview-class.md)), è consigliabile installare anche la versione più recente di Microsoft Internet Explorer, in modo che il computer di destinazione abbia i file di controllo comuni più recenti. (Come minimo, è necessario Internet Explorer 4,0). Le informazioni su come installare i componenti di Internet Explorer sono disponibili nell'Articolo 185375: How to create an Single EXE Install of Internet Explorer nel sito Web supporto tecnico Microsoft.

Se l'applicazione usa le classi di database MFC (ad esempio, la [classe CRecordset](../mfc/reference/crecordset-class.md) e la [classe CRecordView](../mfc/reference/crecordview-class.md)), è necessario ridistribuire ODBC e i driver ODBC usati dall'applicazione.

Se l'applicazione MFC usa controlli Windows Form, è necessario ridistribuire mfcmifc80.dll con l'applicazione. Questa DLL è un assembly .NET firmato con nome sicuro che può essere ridistribuito con un'applicazione nella cartella locale di questa o tramite distribuzione nella Global Assembly Cache con lo strumento [Gacutil.exe (strumento Global Assembly Cache)](/dotnet/framework/tools/gacutil-exe-gac-tool).

Se si ridistribuisce una DLL MFC, assicurarsi di ridistribuirne la versione finale e non la versione di debug. Le versioni di debug delle DLL non sono ridistribuibili. I nomi delle versioni di debug delle DLL MFC terminano con una "d", ad esempio, Mfc140d.dll.

È possibile ridistribuire MFC tramite VCRedist_ *architettura*.exe, tramite modelli unione installati con Visual Studio oppure distribuendo la DLL MFC nella stessa cartella dell'applicazione. Per altre informazioni su come ridistribuire MFC, vedere [Ridistribuzione di file Visual C++](redistributing-visual-cpp-files.md).

## <a name="installation-of-localized-mfc-components"></a>Installazione di componenti MFC localizzati

Se si decide di localizzare l'applicazione installando una DLL di localizzazione MFC, è necessario usare file di unione ridistribuibili (con estensione msm). Se ad esempio si vuole localizzare l'applicazione in un computer x86, è necessario unire Microsoft_VC`<version>`_MFCLOC_x86.msm al pacchetto di installazione per computer x86.

I file con estensione.msm ridistribuibili contengono le DLL usate per la localizzazione. È presente una sola DLL per ogni lingua supportata. Il processo di installazione installa queste DLL nella cartella %windir%\system32\ del computer di destinazione.

Per altre informazioni su come localizzare le applicazioni MFC, vedere [TN057: localizzazione di componenti MFC](../mfc/tn057-localization-of-mfc-components.md).

È possibile ridistribuire DLL di localizzazione MFC distribuendo la DLL MFC nella cartella locale dell'applicazione. Per altre informazioni su come ridistribuire librerie Visual C++, vedere [Ridistribuzione di file Visual C++](redistributing-visual-cpp-files.md).

## <a name="see-also"></a>Vedi anche

[Ridistribuzione di file Visual C++](redistributing-visual-cpp-files.md)
