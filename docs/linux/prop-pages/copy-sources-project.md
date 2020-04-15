---
title: Proprietà di un progetto Copia origini (Linux C++)
ms.date: 10/16/2019
ms.assetid: 1a44230d-5dd8-4d33-93b4-e77e03e00150
ms.openlocfilehash: 732a13520a223f1aa73733cd4098c247052f8d3b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "79441383"
---
# <a name="copy-sources-project-properties-linux-c"></a>Proprietà di un progetto Copia origini (Linux C++)

::: moniker range="vs-2015"

Il supporto Linux è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range=">=vs-2017"

Le proprietà impostate in questa pagina delle proprietà si applicano a tutti i file del progetto tranne quelli per cui sono impostate proprietà a livello di file.

| Proprietà | Descrizione |
|--|--|
| Origini da copiare | Specifica le origini da copiare nel sistema remoto. La modifica di questo elenco potrebbe comportare spostamenti o influire in altro modo sulla struttura di directory in cui i file vengono copiati nel sistema remoto. |
| Copia origini | Specifica se copiare le origini nel sistema remoto. |
| Altre origini da copiare | Specifica le origini aggiuntive da copiare nel sistema remoto. Se lo si desidera, specificare le coppie di mapping da locale a remoto utilizzando una sintassi simile alla seguente: percorsoremotocompleto1:/percorsoremotocompleto1;percorsolocalecompleto2:'fullremotepath2, in cui è possibile copiare un file locale nella posizione remota specificata nel sistema remoto. |

@SourcesToCopyRemotelye @DataFilesToCopyRemotely fare riferimento ai gruppi di elementi nel file di progetto. Per modificare le origini o i file di dati da copiare in modalità remota, modificare il file *vcxproj* in questo modo:

```xml
<ItemGroup>
   <MyItems Include="foo.txt" />
   <MyItems Include="bar.txt" />
   <DataFilesToCopyRemotely Include="@(MyItems)" />
</ItemGroup>
```

::: moniker-end
