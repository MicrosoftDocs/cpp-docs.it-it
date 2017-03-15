---
title: "Procedura: disegnare forme con .NET Framework | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
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
  - "disegno, forme"
  - "GDI+, disegno di forme"
  - "forme"
  - "forme, disegno"
ms.assetid: ffad5ae7-6ef4-4550-8940-be3f209a101d
caps.latest.revision: 15
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: disegnare forme con .NET Framework
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nell'esempio di codice riportato di seguito viene utilizzata la classe <xref:System.Drawing.Graphics> per modificare il gestore eventi <xref:System.Windows.Forms.Form.OnPaint%2A> per recuperare un puntatore all'oggetto <xref:System.Drawing.Graphics> per il form principale.  Questo puntatore viene quindi utilizzato per impostare il colore di sfondo del form e disegnare una linea e un arco utilizzando i metodi <xref:System.Drawing.Graphics.DrawLine%2A?displayProperty=fullName> e <xref:System.Drawing.Graphics.DrawArc%2A>.  
  
> [!NOTE]
>  GDI\+ è incluso con Windows XP ed è disponibile come pacchetto ridistribuibile per Windows NT 4.0 SP 6, Windows 2000, Windows 98 e Windows Me.  Per scaricare la versione più recente del pacchetto ridistribuibile, vedere [http:\/\/go.microsoft.com\/fwlink\/?linkid\=11232](http://go.microsoft.com/fwlink/?linkid=11232).  Per ulteriori informazioni, vedere [GDI\+](_gdiplus_GDI_start_cpp).  
  
## Esempio  
  
```  
#using <system.drawing.dll>  
using namespace System;  
using namespace System::Drawing;  
// ...  
protected:   
virtual Void Form1::OnPaint(PaintEventArgs^ pe ) override  
{  
   Graphics^ g = pe->Graphics;  
   g->Clear(Color::AntiqueWhite);  
  
   Rectangle rect = Form::ClientRectangle;  
   Rectangle smallRect;  
   smallRect.X = rect.X + rect.Width / 4;  
   smallRect.Y = rect.Y + rect.Height / 4;  
   smallRect.Width = rect.Width / 2;  
   smallRect.Height = rect.Height / 2;  
  
   Pen^ redPen = gcnew Pen(Color::Red);  
   redPen->Width = 4;  
   g->DrawLine(redPen, 0, 0, rect.Width, rect.Height);  
  
   Pen^ bluePen = gcnew Pen(Color::Blue);  
   bluePen->Width = 10;  
   g->DrawArc( bluePen, smallRect, 90, 270 );  
}  
```  
  
## Vedere anche  
 [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)   
 [System::Drawing \(spazio dei nomi\)](https://msdn.microsoft.com/en-us/library/system.drawing.aspx)