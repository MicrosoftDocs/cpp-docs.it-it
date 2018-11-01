---
title: Attributi COM
ms.date: 10/03/2018
helpviewer_keywords:
- attributes [C++/CLI], reference topics
- attributes [COM]
- COM, attributes
ms.assetid: 52a5dd70-e8be-4bba-afd6-daf90fe689a0
ms.openlocfilehash: fa7e279f6b7c9c0932d404c336bcfd89bfd553a3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50644093"
---
# <a name="com-attributes"></a>Attributi COM

Gli attributi COM inseriscono il codice per supportare numerose aree dello sviluppo COM e lo sviluppo di .NET Framework common language runtime. Queste aree comprese tra l'implementazione dell'interfaccia personalizzata e il supporto di interfacce esistenti e di supporto eventi, metodi e proprietà predefinite. Inoltre, il supporto è reperibile per composita e implementazione del controllo ActiveX.

|Attributo|Descrizione|
|---------------|-----------------|
|[aggregatable](aggregatable.md)|Indica che un controllo può essere aggregato da un altro controllo.|
|[aggregates](aggregates.md)|Indica che un controllo viene aggregata la classe di destinazione.|
|[coclass](coclass.md)|Crea un oggetto COM, che è possibile implementare un'interfaccia COM.|
|[com_interface_entry](com-interface-entry-cpp.md)|Aggiunge una voce di interfaccia a una mappa COM.|
|[implements_category](implements-category.md)|Specifica le categorie di componenti implementate per la classe.|
|[progid](progid.md)|Definisce il ProgID di un controllo.|
|[rdx](rdx.md)|Crea o modifica una chiave del Registro di sistema.|
|[registration_script](registration-script.md)|Esegue lo script di registrazione specificata.|
|[requires_category](requires-category.md)|Specifica le categorie di componenti necessari per la classe.|
|[support_error_info](support-error-info.md)|Supporta la segnalazione degli errori per l'oggetto di destinazione.|
|[synchronize](synchronize.md)|Sincronizza l'accesso a un metodo.|
|[threading](threading-cpp.md)|Specifica il modello di threading per un oggetto COM.|
|[vi_progid](vi-progid.md)|Definisce un ProgID indipendenti dalla versione per un controllo.|

## <a name="see-also"></a>Vedere anche

[Attributi per gruppo](attributes-by-group.md)