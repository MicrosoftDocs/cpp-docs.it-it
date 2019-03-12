---
title: Ridistribuzione di un'applicazione ATL
ms.date: 11/04/2016
helpviewer_keywords:
- ATL, redistributing
- redistributing ATL
- redistributing OLE DB templates
- OLE DB templates, redistributing
ms.assetid: 9a696b22-2345-43ec-826b-be7cb8cfd676
ms.openlocfilehash: 6db81064db5e83ed4ba58fd5d800215dd93eb6c9
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57745050"
---
# <a name="redistributing-an-atl-application"></a>Ridistribuzione di un'applicazione ATL

Iniziando da Visual Studio 2012, Active Template Library (ATL) è una libreria di sola intestazione. I progetti ATL non presentano un'opzione di collegamento dinamico ad ATL. Non è necessaria alcuna libreria ATL ridistribuibile.

Se si ridistribuisce un'applicazione eseguibile ATL, è necessario registrare il file .exe (e tutti i controlli all'interno dello stesso) eseguendo il comando seguente:

```
filename /regserver
```

dove `filename` è il nome del file eseguibile.

In Visual Studio 2010, può essere creato un progetto ATL per una configurazione MinDependency o MinSize. Una configurazione MinDependency viene visualizzata quando si imposta la proprietà **Uso di ATL** su **Collegamento statico ad ATL** nella pagina delle proprietà **Generale** e si imposta la proprietà **Libreria di runtime** su **Multithread (/MT)** nella pagina delle proprietà **Generazione codice** (cartella C/C++).

Una configurazione MinSize viene visualizzata quando si imposta la proprietà **Uso di ATL** su **Collegamento dinamico ad ATL** nella pagina delle proprietà **Generale** o si imposta la proprietà **Libreria di runtime** su **DLL multithread (/MD)** nella pagina delle proprietà **Generazione codice** (cartella C/C++).

MinSize rende il file di output il più piccolo possibile, ma richiede che ATL100.dll e Msvcr100.dll (se è stata selezionata l'opzione **DLL multithread (/MD)**) si trovino nel computer di destinazione. ATL100 deve essere registrato nel computer di destinazione per essere sicuri che tutte le funzionalità ATL siano presenti. ATL100.ddl contiene esportazioni ANSI e Unicode.

Se si compila un progetto ATL o di modelli OLE DB per una destinazione MinDependency, non è necessario installare e registrare ATL100.dll nel computer di destinazione, anche se è possibile ottenere un'immagine più grande del programma.

Se si ridistribuisce un'applicazione eseguibile ATL, è necessario registrare il file .exe (e tutti i controlli all'interno dello stesso) eseguendo il comando seguente:

```
filename /regserver
```

dove `filename` è il nome del file eseguibile.

## <a name="see-also"></a>Vedere anche

[Ridistribuzione di file Visual C++](../ide/redistributing-visual-cpp-files.md)
