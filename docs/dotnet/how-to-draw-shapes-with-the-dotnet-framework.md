---
title: 'Procedura: disegnare forme con .NET Framework | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- GDI+, drawing shapes
- drawing, shapes
- shapes
- shapes, drawing
ms.assetid: ffad5ae7-6ef4-4550-8940-be3f209a101d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 877e78b1ce4f81af76aa20961ea05d18e64f58f0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33130035"
---
# <a name="how-to-draw-shapes-with-the-net-framework"></a>Procedura: disegnare forme con .NET Framework
Nell'esempio di codice viene illustrato come utilizzare il <xref:System.Drawing.Graphics> classe per modificare il <xref:System.Windows.Forms.Form.OnPaint%2A> gestore eventi per recuperare un puntatore al <xref:System.Drawing.Graphics> oggetto per il form principale. Questo puntatore viene quindi utilizzato per impostare il colore di sfondo del form e disegnare una linea e un arco utilizzando il <xref:System.Drawing.Graphics.DrawLine%2A?displayProperty=fullName> e <xref:System.Drawing.Graphics.DrawArc%2A> metodi.  
  
## <a name="example"></a>Esempio  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Programmazione .NET con C + + CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)   
 [Spazio dei nomi System::Drawing](https://msdn.microsoft.com/en-us/library/system.drawing.aspx)