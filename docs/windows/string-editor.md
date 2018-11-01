---
title: Editor stringhe (C++)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.string.F1
helpviewer_keywords:
- String editor
- string tables
- string tables [C++], String editor
- string editing
- string editing, string tables
- resource editors [C++], String editor
- strings [C++], editing
ms.assetid: f71ab8de-3068-4e29-8e28-5a33d18dd416
ms.openlocfilehash: add153f84259985066397b6340fb4281a11beb17
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50513659"
---
# <a name="string-editor-c"></a>Editor stringhe (C++)

Una tabella di stringhe è una risorsa di Windows che contiene un elenco di ID, valori e didascalie per tutte le stringhe dell'applicazione. Ad esempio, nella tabella di stringhe sono contenuti i prompt della barra di stato.

Quando si sviluppa un'applicazione possono essere presenti più tabelle di stringhe, uno per ogni lingua o condizione. Un modulo eseguibile, invece, ha una sola tabella di stringhe. Un'applicazione in esecuzione può fare riferimento a più tabelle di stringhe se le tabelle vengano inserite in DLL diverse.

Le tabelle di stringhe semplificano la localizzazione dell'applicazione in diverse lingue. Se tutte le stringhe si trovano in una tabella di stringhe, è possibile localizzare l'applicazione traducendo le stringhe e altre risorse senza modificare il codice sorgente. Questa procedura è in genere preferibile alla ricerca e alla sostituzione manuali delle diverse stringhe nei file di origine.

Con l'editor stringhe è possibile:

- [Cercare una o più stringhe](../windows/finding-a-string.md).

- [Inserire nuove voci](../windows/adding-or-deleting-a-string.md) nella tabella di stringhe in modo rapido.

- [Spostare una stringa da un file di risorse a un altro](../windows/moving-a-string-from-one-resource-file-to-another.md)

- [Usare la modifica sul posto per le proprietà ID, Value e Caption](../windows/changing-the-properties-of-a-string.md) e visualizzare immediatamente le modifiche.

- [Modificare la proprietà Caption di più stringhe](../windows/changing-the-caption-property-of-multiple-strings.md)

- [Aggiungere caratteri speciali o di formattazione a una stringa](../windows/adding-formatting-or-special-characters-to-a-string.md)

   > [!NOTE]
   > Windows non consente la creazione di tabelle di stringhe vuote. Se si crea una tabella di stringhe priva di voci, questa verrà eliminata automaticamente al salvataggio del file di risorse.

Per informazioni sull'aggiunta di risorse a progetti gestiti (quelli destinati a common language runtime), vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [procedura dettagliata: localizzazione di Windows Form](/previous-versions/visualstudio/visual-studio-2010/y99d1cd3).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor di risorse](../windows/resource-editors.md)<br/>
[Stringhe](https://msdn.microsoft.com/library/windows/desktop/ms646979.aspx)<br/>
[Informazioni sulle stringhe](/windows/desktop/menurc/about-strings)

