---
title: Proprietà di un progetto Copia origini (Linux C++)
ms.date: 10/16/2019
ms.assetid: 1a44230d-5dd8-4d33-93b4-e77e03e00150
ms.openlocfilehash: 393f1b92bb5185bcd5ce93999e0c13f7d370e78d
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92924540"
---
# <a name="copy-sources-project-properties-linux-c"></a>Proprietà di un progetto Copia origini (Linux C++)

::: moniker range="msvc-140"

Il supporto Linux è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range=">=msvc-150"

Le proprietà impostate in questa pagina delle proprietà si applicano a tutti i file del progetto tranne quelli per cui sono impostate proprietà a livello di file.

| Proprietà | Descrizione |
|--|--|
| Origini da copiare | Specifica le origini da copiare nel sistema remoto. La modifica di questo elenco potrebbe comportare spostamenti o influire in altro modo sulla struttura di directory in cui i file vengono copiati nel sistema remoto. |
| Copia origini | Specifica se copiare le origini nel sistema remoto. |
| Altre origini da copiare | Specifica le origini aggiuntive da copiare nel sistema remoto. Facoltativamente, specificare le coppie di mapping da locale a remoto usando una sintassi simile alla seguente: a percorsolocalecompleto1: = percorsoremotocompleto1; percorsolocalecompleto2: = percorsoremotocompleto2, in cui è possibile copiare un file locale nel percorso remoto specificato nel sistema remoto. |

@SourcesToCopyRemotely e @DataFilesToCopyRemotely fanno riferimento ai gruppi di elementi nel file di progetto. Per modificare le origini o i file di dati copiati in modalità remota, modificare il file *vcxproj* nel modo seguente:

```xml
<ItemGroup>
   <MyItems Include="foo.txt" />
   <MyItems Include="bar.txt" />
   <DataFilesToCopyRemotely Include="@(MyItems)" />
</ItemGroup>
```

::: moniker-end
