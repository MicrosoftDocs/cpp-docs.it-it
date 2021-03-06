---
description: 'Ulteriori informazioni su: stringhe, creazione guidata pagina delle proprietà ATL'
title: Stringhe, Creazione guidata pagina delle proprietà ATL
ms.date: 05/09/2019
f1_keywords:
- vc.codewiz.class.atl.ppg.strings
helpviewer_keywords:
- ATL Property Page Wizard, strings
ms.assetid: 00547db6-911f-49eb-92e1-2ba67079d4df
ms.openlocfilehash: f2d5b814cd817d37569765f4777c63661f6f8ca9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97157646"
---
# <a name="strings-atl-property-page-wizard"></a>Stringhe, Creazione guidata pagina delle proprietà ATL

::: moniker range="msvc-160"

La Creazione guidata pagina delle proprietà ATL non è disponibile in Visual Studio 2019 e versioni successive.

::: moniker-end

::: moniker range="<=msvc-150"

Fornisce il testo associato alla pagina delle proprietà.

- **Title**

   Ottiene il testo visualizzato nella scheda della pagina delle proprietà.

- **Stringa doc**

   Imposta una stringa di testo che descrive la pagina. Questa stringa può essere visualizzata nella finestra di dialogo delle proprietà. La finestra delle proprietà può usare la descrizione in una riga di stato o una descrizione comando. La finestra delle proprietà standard attualmente non usa questa stringa.

- **File della Guida**

   Imposta il nome del file della Guida che descrive come usare la pagina delle proprietà. Questo nome non deve includere un percorso. Quando l'utente preme **?**, viene aperto il file della Guida nella directory specificata nel valore della chiave HelpDir nelle voci del Registro di sistema della pagina delle proprietà nel valore CLSID corrispondente.

::: moniker-end

## <a name="see-also"></a>Vedi anche

[Creazione guidata pagina delle proprietà ATL](../../atl/reference/atl-property-page-wizard.md)<br/>
[Opzioni, Creazione guidata pagina delle proprietà ATL](../../atl/reference/options-atl-property-page-wizard.md)
