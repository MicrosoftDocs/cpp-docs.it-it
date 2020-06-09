---
title: Appunti
ms.date: 11/04/2016
helpviewer_keywords:
- cutting and copying data
- copying data
- Clipboard
- Clipboard, programming
- transferring data
ms.assetid: a71b2824-1f14-4914-8816-54578d73ad4e
ms.openlocfilehash: 5f4a17bedaa50913dce1f6388dfb6b8d9ecd38da
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84617280"
---
# <a name="clipboard"></a>Appunti

In questa famiglia di articoli viene illustrato come implementare il supporto per gli Appunti di Windows nelle applicazioni MFC. Gli Appunti di Windows vengono usati in due modi:

- Implementazione dei comandi di menu di modifica standard, ad esempio taglia, copia e incolla.

- Implementazione del trasferimento dati uniforme con trascinamento della selezione OLE.

Gli Appunti sono il metodo standard di Windows per il trasferimento di dati tra un'origine e una destinazione. Può anche essere molto utile nelle operazioni OLE. Con l'avvento di OLE, in Windows sono disponibili due meccanismi per gli Appunti. L'API degli Appunti di Windows standard è ancora disponibile, ma è stata integrata con il meccanismo di trasferimento dei dati OLE. L'UDT (Uniform Data Transfer) OLE supporta le operazioni Taglia, copia e incolla con gli appunti e il trascinamento della selezione.

Gli Appunti sono un servizio di sistema condiviso dall'intera sessione di Windows, pertanto non dispone di un handle o di una classe. Gli Appunti vengono gestiti tramite le funzioni membro della classe [CWnd](reference/cwnd-class.md).

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Quando utilizzare ogni meccanismo di appunti](clipboard-when-to-use-each-clipboard-mechanism.md)

- [Uso dell'API degli Appunti di Windows tradizionale](clipboard-using-the-windows-clipboard.md)

- [Utilizzo del meccanismo degli Appunti OLE](clipboard-using-the-ole-clipboard-mechanism.md)

- [copiare e incollare dati](clipboard-copying-and-pasting-data.md)

- [Aggiunta di altri formati](clipboard-adding-other-formats.md)

- [Appunti di Windows](/windows/win32/dataxchg/clipboard)

- [Trascinamento della selezione OLE](drag-and-drop-ole.md)

## <a name="see-also"></a>Vedere anche

[Elementi dell'interfaccia utente](user-interface-elements-mfc.md)
