---
description: 'Altre informazioni su: attributi COM'
title: Attributi COM
ms.date: 10/03/2018
helpviewer_keywords:
- attributes [C++/CLI], reference topics
- attributes [COM]
- COM, attributes
ms.assetid: 52a5dd70-e8be-4bba-afd6-daf90fe689a0
ms.openlocfilehash: d1377bdcb449190d01f529b2a4c713f138cbef5f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97269172"
---
# <a name="com-attributes"></a>Attributi COM

Gli attributi COM inseriscono il codice per supportare numerose aree di sviluppo COM e .NET Framework Common Language Runtime lo sviluppo. Queste aree variano dall'implementazione dell'interfaccia personalizzata e dal supporto di interfacce esistenti per il supporto di proprietà, metodi ed eventi azionari. Inoltre, è possibile trovare il supporto per l'implementazione del controllo composito e ActiveX.

|Attributo|Descrizione|
|---------------|-----------------|
|[aggregatable](aggregatable.md)|Indica che un controllo può essere aggregato da un altro controllo.|
|[aggregati](aggregates.md)|Indica che un controllo aggrega la classe di destinazione.|
|[coclass](coclass.md)|Crea un oggetto COM che può implementare un'interfaccia COM.|
|[com_interface_entry](com-interface-entry-cpp.md)|Aggiunge una voce di interfaccia a una mappa COM.|
|[implements_category](implements-category.md)|Specifica le categorie di componenti implementate per la classe.|
|[ProgID](progid.md)|Definisce il ProgID per un controllo.|
|[rdx](rdx.md)|Crea o modifica una chiave del registro di sistema.|
|[registration_script](registration-script.md)|Esegue lo script di registrazione specificato.|
|[requires_category](requires-category.md)|Specifica le categorie di componenti obbligatorie per la classe.|
|[support_error_info](support-error-info.md)|Supporta la segnalazione degli errori per l'oggetto di destinazione.|
|[sincronizzare](synchronize.md)|Sincronizza l'accesso a un metodo.|
|[Threading](threading-cpp.md)|Specifica il modello di threading per un oggetto COM.|
|[vi_progid](vi-progid.md)|Definisce un ProgID indipendente dalla versione per un controllo.|

## <a name="see-also"></a>Vedi anche

[Attributi per gruppo](attributes-by-group.md)
