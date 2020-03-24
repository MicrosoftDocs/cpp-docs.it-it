---
title: Attributi COM
ms.date: 10/03/2018
helpviewer_keywords:
- attributes [C++/CLI], reference topics
- attributes [COM]
- COM, attributes
ms.assetid: 52a5dd70-e8be-4bba-afd6-daf90fe689a0
ms.openlocfilehash: 15225d23abb66b8aadd5f82b8429334356bdaa8d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80168317"
---
# <a name="com-attributes"></a>Attributi COM

Gli attributi COM inseriscono il codice per supportare numerose aree di sviluppo COM e .NET Framework Common Language Runtime lo sviluppo. Queste aree variano dall'implementazione dell'interfaccia personalizzata e dal supporto di interfacce esistenti per il supporto di proprietà, metodi ed eventi azionari. Inoltre, è possibile trovare il supporto per l'implementazione del controllo composito e ActiveX.

|Attributo|Descrizione|
|---------------|-----------------|
|[aggregatable](aggregatable.md)|Indica che un controllo può essere aggregato da un altro controllo.|
|[aggregates](aggregates.md)|Indica che un controllo aggrega la classe di destinazione.|
|[coclass](coclass.md)|Crea un oggetto COM che può implementare un'interfaccia COM.|
|[com_interface_entry](com-interface-entry-cpp.md)|Aggiunge una voce di interfaccia a una mappa COM.|
|[implements_category](implements-category.md)|Specifica le categorie di componenti implementate per la classe.|
|[progid](progid.md)|Definisce il ProgID per un controllo.|
|[rdx](rdx.md)|Crea o modifica una chiave del registro di sistema.|
|[registration_script](registration-script.md)|Esegue lo script di registrazione specificato.|
|[requires_category](requires-category.md)|Specifica le categorie di componenti obbligatorie per la classe.|
|[support_error_info](support-error-info.md)|Supporta la segnalazione degli errori per l'oggetto di destinazione.|
|[synchronize](synchronize.md)|Sincronizza l'accesso a un metodo.|
|[threading](threading-cpp.md)|Specifica il modello di threading per un oggetto COM.|
|[vi_progid](vi-progid.md)|Definisce un ProgID indipendente dalla versione per un controllo.|

## <a name="see-also"></a>Vedere anche

[Attributi per gruppo](attributes-by-group.md)
