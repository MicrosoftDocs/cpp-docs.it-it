---
title: Assegnazione di chiavi di accesso ai comandi di Menu (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- access keys [C++], checking
- menus [C++], shortcut keys
- keyboard shortcuts [C++], command assignments
- access keys [C++], assigning
- mnemonics [C++], adding to menus
- keyboard shortcuts [C++], uniqueness checking
- mnemonics [C++], uniqueness checking
- Check Mnemonics command
ms.assetid: fbcf1a00-af6a-4171-805a-0ac01d4e8b0d
ms.openlocfilehash: 7a3302f7744bf5c3a0cbaac96de04d9f649fac10
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50587330"
---
# <a name="assigning-access-keys-to-menu-commands-c"></a>Assegnazione di chiavi di accesso ai comandi di Menu (C++)

In un progetto C++, è possibile assegnare una chiave di accesso (tasto di scelta che consente all'utente di selezionare il menu di scelta con la tastiera) ai menu e comandi di menu.

### <a name="to-assign-an-access-shortcut-key-to-a-menu-command"></a>Per assegnare un tasto di scelta (scelta rapida) a un comando di menu

1. Digitare una e commerciale (`&`) davanti a una lettera nel nome di menu o nome del comando per specificare tale lettera come tasto di scelta corrispondente. Ad esempio "& File" imposta **Alt**+**F** come tasto di scelta rapida per il **File** menu nelle applicazioni scritte per Microsoft Windows.

   La voce di menu visualizzerà un segnale visivo che indica che a una delle lettere è assegnato un tasto di scelta rapida. La lettera che segue la e commerciale verrà visualizzata con una sottolineatura (a seconda del sistema operativo).

   > [!NOTE]
   > Verificare che tutti i tasti di scelta di un menu siano univoci facendo clic con il pulsante destro del mouse sul menu e scegliendo **Tasti di scelta** dal menu di scelta rapida.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor dei menu](../windows/menu-editor.md)