---
title: "Procedura: convertire formati di file immagine con .NET Framework | Microsoft Docs"
ms.custom: ""
ms.date: "12/08/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GDI+ [C++], conversione di formati di file di immagine"
  - "grafica [C++], conversione di formati di file di immagine"
ms.assetid: 5d5384b0-b9b7-4262-b9ad-c4cb95f75ee4
caps.latest.revision: 13
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: convertire formati di file immagine con .NET Framework
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

\<?xml version="1.0" encoding="utf-8"?>
\<developerHowToDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>L'esempio di codice seguente illustra la classe <codeEntityReference qualifyHint="true" autoUpgrade="true">: System.Drawing.Image</codeEntityReference> e l'enumerazione <codeEntityReference qualifyHint="true" autoUpgrade="true">T:System.Drawing.Imaging.ImageFormat</codeEntityReference> usate per convertire e salvare i file di immagine. Il codice seguente carica un'immagine da un file con estensione jpg e la salva nei formati di file con estensione gif e bmp.</para>
    <alert class="note">
      <para>GDI+ è incluso in Windows XP, Windows Server 2003 e Windows Vista ed è disponibile come file ridistribuibile per Windows 2000. Per scaricare il file ridistribuibile più recente, vedere <externalLink><linkText>http://go.microsoft.com/fwlink/?linkid=11232</linkText><linkUri>http://go.microsoft.com/fwlink/?linkid=11232</linkUri></externalLink>. Per altre informazioni, vedere \<legacyLink xlink:href="_gdiplus_GDI_start_cpp">GDI+</legacyLink>.</para>
    </alert>
  </introduction>
  <codeExample>
    <code>#using &lt;system.drawing.dll&gt;

using namespace System;
using namespace System::Drawing;
using namespace System::Drawing::Imaging;

int main()
{
   Image^ image = Image::FromFile("SampleImage.jpg");
   image-&gt;Save("SampleImage.png", ImageFormat::Png);
   image-&gt;Save("SampleImage.bmp", ImageFormat::Bmp);

   return 0;
}</code>
  </codeExample>
  <relatedTopics>
\<link xlink:href="2c7f3b0f-a266-4f0e-b318-d6f1371e04a9">Programmazione .NET in C++</link>
<codeEntityReference autoUpgrade="true">N:System.Drawing</codeEntityReference>
</relatedTopics>
</developerHowToDocument>.