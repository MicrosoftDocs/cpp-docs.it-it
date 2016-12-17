---
title: "Esempi VSCT in C# e C++ | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "file VSCT, esempi"
ms.assetid: 3218584b-c619-487c-9486-514b04937020
caps.latest.revision: 6
caps.handback.revision: 6
manager: "douge"
---
# Esempi VSCT in C# e C++
VSCT è diventato nuova modalità di definizione dei controlli.  Per questo motivo, una modifica si è verificata in come negli esempi di VSCT vengono compilati in c\# e C\+\+.  I controlli sono ora definiti in C\+\+ con i file esterni e in c\# con una sezione dei simboli nel file di .vsct.  
  
## Definizione dei controlli  
  
### File esterni C\+\+  
 Negli esempi di C\+\+, il compilatore di VSCT include i file esterni per definire le costanti utilizzate nelle definizioni dei comandi.  La modalità includere tali file e quindi definire le costanti nelle definizioni dei controlli consenta di aggiungere un tag di `Extern` nel file di .vsct e specificare il nome dei riferimenti a file esterni nell'attributo di `href` .  questi file sono:  
  
-   Guids.h  
  
-   CommandIDs.h  
  
-   Resources.h  
  
 Il seguente frammento del file c\+\+ .vsct viene illustrato come includere questi file:  
  
 `<!--This is the file with the definition of the Guids specific for this sample.-->`  
  
 `<Extern href="Guids.h"/>`  
  
 `<!--Definition of the IDs of the commands and VSCT elements specific for this sample.-->`  
  
 `<Extern href="CommandIds.h"/>`  
  
 `<!--Definition of the resources exposed by this package.  Here it is used for the ID of the bitmap.-->`  
  
 `<Extern href="Resource.h"/>`  
  
### Simboli c\#  
 Negli esempi di c\#, il file di .vsct dispone di una sezione nel file stessa di `Symbols` per definire i controlli.  La definizione dei simboli in un file di .vsct in c\# dalla visualizzazione degli ID degli elementi vengono definiti dalla tabella dei comandi.  L'esempio seguente è un frammento da un file c\# .vsct che specifica i controlli e le costanti associati:  
  
 `<Symbols>`  
  
 `<!--The first GUID defined here is the one for the package.  It does not contain numeric IDs.-->`  
  
 `<GuidSymbol name="guidMenuAndCommandsPkg" value="{746D5114-B030-4D64-9A6D-E2ABE1E78E56}" />`  
  
 `<!--The GUID for the command set is the one that contains the numeric IDs used in this sample`  
  
 `with the only exception of the one used for the bitmap.-->`  
  
 `<GuidSymbol name="guidMenuAndCommandsCmdSet" value="{10A79DAE-B33C-4FDB-8922-B056628858A1}">`  
  
 `<!--Menus-->`  
  
 `<IDSymbol name="MyToolbar" value="0x101" />`  
  
 `<!--Groups-->`  
  
 `<IDSymbol name="MyMenuGroup" value="0x1010" />`  
  
 `<IDSymbol name="MyToolbarGroup" value="0x1011" />`  
  
 `<IDSymbol name="MyMainToolbarGroup" value="0x1012" />`  
  
 `<IDSymbol name="MyEditorCtxGroup" value="0x1013" />`  
  
 `<!--Commands-->`  
  
 `<IDSymbol name="cmdidMyCommand" value="0x2001" />`  
  
 `<IDSymbol name="cmdidMyGraph" value="0x2002" />`  
  
 `<IDSymbol name="cmdidMyZoom" value="0x2003" />`  
  
 `<IDSymbol name="cmdidDynamicTxt" value="0x2004" />`  
  
 `<IDSymbol name="cmdidDynVisibility1" value="0x2005" />`  
  
 `<IDSymbol name="cmdidDynVisibility2" value="0x2006" />`  
  
 `</GuidSymbol>`  
  
 `<!--Last is the definition of the GUID used for the Bitmap and the ID of its used slots.-->`  
  
 `<GuidSymbol name="guidGenericCmdBmp" value="{0A4C51BD-3239-4370-8869-16E0AE8C0A46}">`  
  
 `<IDSymbol name="bmpArrow" value="1" />`  
  
 `</GuidSymbol>`  
  
 `</Symbols>`  
  
## incorporare le bitmap  
  
### C\#  
 Le bitmap binari in CTO C\+\+ e c\# vengono archiviate esternamente su disco.  L'id della bitmap viene definita in una modalità in modo da necessario fornire la definizione di un attributo di GUID per la bitmap, un attributo di `resID` strip bitmap contenente le bitmap e quindi l'ID numerico degli elementi utilizzati in una definizione del pulsante \(attributo di`usedList` \).  Un aspetto importante di questa dichiarazione è e l'id dell'elemento deve essere effettivo indice \(1\) based interno della bitmap la banda bitmap.  
  
 Nell'esempio una striscia della bitmap è inclusa che contiene un solo elemento.  L'ID di questo elemento viene definito come guidMenuAndCommandsCmdSet: il bmpArrow, in modo da bmpArrow deve essere definiti come 1.  Costituisce inoltre la dichiarazione della bitmap.  
  
 `<Bitmap guid="guidGenericCmdBmp" href="GenericCmd.bmp"    usedList="bmpArrow"/>`  
  
## Vedere anche  
 [Tabella di comandi di Visual Studio \(. File Vsct\)](../Topic/Visual%20Studio%20Command%20Table%20\(.Vsct\)%20Files.md)