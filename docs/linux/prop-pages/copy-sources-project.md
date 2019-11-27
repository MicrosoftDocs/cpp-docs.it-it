---
title: Proprietà di un progetto Copia origini (Linux C++)
ms.date: 10/16/2019
ms.assetid: 1a44230d-5dd8-4d33-93b4-e77e03e00150
ms.openlocfilehash: bc99814e825cda091b6a0b00256ca2d8269ecdd3
ms.sourcegitcommit: 069e3833bd821e7d64f5c98d0ea41fc0c5d22e53
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/21/2019
ms.locfileid: "74305391"
---
# <a name="copy-sources-project-properties-linux-c"></a>Proprietà di un progetto Copia origini (Linux C++)

::: moniker range="vs-2015"

Il supporto Linux è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range=">=vs-2017"

Le proprietà impostate in questa pagina delle proprietà si applicano a tutti i file del progetto tranne quelli per cui sono impostate proprietà a livello di file.

Proprietà | Descrizione
--- | ---
Origini da copiare | Specifica le origini da copiare nel sistema remoto. La modifica di questo elenco potrebbe comportare spostamenti o influire in altro modo sulla struttura di directory in cui i file vengono copiati nel sistema remoto.
Copia origini | Specifica se copiare le origini nel sistema remoto.
Altre origini da copiare | Specifica le origini aggiuntive da copiare nel sistema remoto. Facoltativamente è possibile specificare l'elenco come coppie di mapping da percorso locale a percorso remoto usando una sintassi simile a percorsolocalecompleto1:=percorsoremotocompleto1;percorsolocalecompleto2:=percorsoremotocompleto2, che consente di copiare un file locale nel percorso remoto specificato nel sistema remoto.

@SourcesToCopyRemotely e @DataFilesToCopyRemotely fanno riferimento ai gruppi di elementi nel file di progetto. Per modificare le origini o i file di dati copiati in modalità remota, modificare il file *vcxproj* nel modo seguente:

```xml
<ItemGroup>
   <MyItems Include="foo.txt" />
   <MyItems Include="bar.txt" />
   <DataFilesToCopyRemotely Include="@(MyItems)" />
</ItemGroup>
```

::: moniker-end
